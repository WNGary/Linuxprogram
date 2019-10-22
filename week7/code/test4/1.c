#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int globe = 4;
int main(){
	pid_t pid;
	int vari = 5;
	printf("before fork\n");
	//fork 返回给子进程0;
	//返回给父进程一个大于0的pid号;
	if((pid = fork()) < 0){
		printf("fork error\n");
		_exit(0);	
	}else if(pid == 0){
		globe++;
		vari--;
		printf("Child changed\n");
	}else
		printf("Parent did not change\n");
	printf("globe = %d vari = %d\n",globe,vari);
	exit(0);
}

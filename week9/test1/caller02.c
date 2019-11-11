#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	printf("caller02:pid=%d,ppid=%d\n",getpid(),getppid());
	execl("/home/rlk/homework/week9/test1/test01","./test01","123","456",NULL);
	printf("after calling!\n");
	sleep(100);
	return 0;
}

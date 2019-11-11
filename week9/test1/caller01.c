#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	printf("caller02:pid=%d,ppid=%d\n",getpid(),getppid());
	execv("/home/rlk/homework/week9/test1/test",[123,456,NULL]);
	printf("after calling!\n");
	sleep(100);
	return 0;
}

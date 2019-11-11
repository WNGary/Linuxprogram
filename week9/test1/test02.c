#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	int ret;
	printf("test02:pid=%d,ppid=%d\n",getpid(),getppid());
	ret = system("/home/rlk/homework/week9/test1/test");
	printf("after calling!\n");
	sleep(100);
	return 0;
}

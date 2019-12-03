#include <stdio.h>
#include <time.h>
#include "my.h"
#include <unistd.h>
#include <signal.h>
#include <sys/param.h>
#include <sys/types.h>
#include <sys/stat.h>
int main (){
	pid_t result;
	int r_num;
	int pipe_fd[2];
	char buf_r[100];
	memset(buf_r,0,sizeof(buf_r));
	if(pipe(pipe_fd)<0){
		printf("创建管道失败");
		return -1;
	}
	result = fork();
	if(result<0){
		perror("创建子进程失败");
		exit;
	}else if (result==0){
		close(pipe_fd[1]);
		if((r_num=read(pipe_fd[0],buf_r,100))>0)
			printf("");
		close(pipe_fd[0]);
		exit(0);
	}
}

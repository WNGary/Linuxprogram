#include "my.h"
#include <string.h>
#include <fcntl.h>
int main(){
	pid_t pid ;
	char str[64];
	int buffer[10] = {1,2,3,4,5,6,7,8,9,10};
	int fd;
	int i;
	char fpname[]="b.txt";
	fd = open(fpname, O_RDWR | O_CREAT);
	pid = vfork();
	for(i=0;i<10;i++){
		if(pid<0){
			perror("fail to fork!\n");
			return -1;
		}else if(pid==0){
				printf("%d : child is running now!\n",getpid());
				sprintf(str,"child in %d\n",buffer[i]);
				write(fd,str,strlen(str));
		}else{
				printf("%d : parent is running now!\n",getpid());
				sprintf(str,"parent in %d\n",buffer[i]);
				write(fd,str,strlen(str));
			}
	}
	exit(0);
}

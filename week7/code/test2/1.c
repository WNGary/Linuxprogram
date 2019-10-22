#include <stdio.h>

int main(int argc, char* argv[]){
	int i, a;
	//a = printf("hello");
	printf("hello");
	setvbuf(stdout, NULL, _IONBF, 0);
	//fflush(stdout);
	//fclose(stdout);
	/*for (i = 0; i <= 1024 - a; i++){
		putchar('\0');
	}*/
	while(1);
}

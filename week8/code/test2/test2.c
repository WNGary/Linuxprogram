#include <stdio.h>
#include <stdlib.h>
int a;
static int b = 10;
int main(int argc, char* argv[], char* envp[])
{
	int a = 10;//stack
	char* p = (char*)malloc(sizeof(char));//heap
	printf("a = %d, p = 0x%x\n", a, (unsigned int)(long)p);
	getchar();
	getchar();
	return 0;
}

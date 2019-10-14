#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i ;
	printf("\nbefore calling!\n");
	sleep(10);
	i = system("./text3");
	printf("\nafter calling!\n");
	printf("\nreturn value=%d\n",i);
	return 0;
}

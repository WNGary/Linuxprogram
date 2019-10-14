#include "uhead.h"

void urand(int* arr, int n)
{
	int i ;
	srand((int)time(0));
	for(i = 0; i < n ; i++)
	{
		arr[i] = 1 + (int)(100.0*rand()/(RAND_MAX+1.0));
	}
}

void show(int* arr , int len)
{
	int i ;
	for(i = 0; i < len ; i++)
	{
		printf("a[%d] = %d\n", i , arr[i]);
	}
}

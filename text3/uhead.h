#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define UNUMBER 100

struct arg
{
	int sum;
	float ave;
};

void urand(int* , int);
void show(int* , int);

struct arg uoperater(int* , int);

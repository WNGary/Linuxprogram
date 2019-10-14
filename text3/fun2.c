#include "uhead.h"

struct arg uoperater(int* arr , int n)
{
	struct arg t;
	int i ;
	t.sum = 0;
	t.ave = 0.0;
	for(i = 0; i < n; i++)
	{
		t.sum = t.sum + arr[i];
	}
	t.ave = ((float)t.sum)/n;
	return t;
}

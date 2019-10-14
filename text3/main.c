#include "uhead.h"

int main()
{
	int* a[UNUMBER] ;
	struct arg t;
	urand(a , UNUMBER);
	show(a , UNUMBER);
	t = uoperater(a,UNUMBER);
	printf("\n**********\n sum=%d\n ave = %f\n",t.sum,t.ave );
	return 0;
}

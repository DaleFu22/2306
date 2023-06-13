#include <stdio.h>

int main(void)
{
	int a[7] = {1,5,2,6,7,8,9};
	int *p,*q;
	int temp;
	
	for(p = a,q = &a[6];p<q;p++,q--)
	{
		temp = *p;
		*p = *q;
		*q = temp;
	}

	for(p = a;p < a+7;p++)
	{
		printf("%d\t",*p);
	}
	puts("");

	return 0;
}

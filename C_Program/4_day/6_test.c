#include <stdio.h>

int main(void)
{
	int a,sum=0,i=1;
	for(a=1;a<=101;a+=2)
	{
		sum += a*i;
		i=-i;
	}
	printf("%d\n",sum);

	return 0;
}

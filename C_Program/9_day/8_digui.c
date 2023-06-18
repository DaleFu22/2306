#include <stdio.h>

int fac(int i);

int main(void)
{
	int sum = fac(3);
	printf("sum = %d\n",sum);
}

int fac(int i)
{
	int j;
	if (i==0 || i==1) return 1;
	else j=fac(i-1)*i;
	return j;
}

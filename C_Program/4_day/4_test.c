#include <stdio.h>

int main(void)
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);

	if(a>b)
	{
		d = a;
	}else
	{
		d = b;
	}
	if(c>d)
	{
		d = c;
	}
	printf("%d\n",d);

	return 0;
}

#include <stdio.h>

int main(void)
{
	int i = 100,a,b,c;
	while(i++ < 999)
	{
		a = i/100;//百位
		b = i/10%10;//十位
		c = i%10;//个位
		if((a*a*a+b*b*b+c*c*c) == i)
		{
			printf("%d是水仙花数\n",i);
		}
	}

	return 0;
}

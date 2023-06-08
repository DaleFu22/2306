#include <stdio.h>

int main(void)
{
#if 0
	int a = 4,b = 5;
	if((a > 0) && (b = b+1))
	{
		printf("我会执行吗\n");
	}
	printf("a = %d\tb = %d\n",a,b);
#endif
	int a = 4,b = 5;
	if((a < 0) || (b = b+1))
	{
		printf("我会执行吗\n");
	}
	printf("a = %d\tb = %d\n",a,b);

	return 0;
}

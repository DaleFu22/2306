#include <stdio.h>

int main(void)
{
	int a = 888;
#if 0
	if(a > 0)
	{
		printf("a大于0\n");
	}
	else if(a > 100)
	{
		printf("a大于100\n");
	}
	else if(a > 800)
	{
		printf("a大于800\n");
	}
	else
	{
		printf("马宝国\n");
	}
#endif
	if(a > 0)
	{
		printf("a大于0\n");
	}
	if(a > 100)
	{
		printf("a大于100\n");
	}
	if(a > 800)
	{
		printf("a大于800\n");
	}
	else
	{
		printf("马宝国\n");
	}
}


#include <stdio.h>

int main(void)
{
	int a = 888;
	if(a > 0)
	{
		printf("a大于0\n");
		if(a > 100)
		{
			printf("a大于100\n");
			if(a > 999)
			{
				printf("a大于999\n");
			}
			else
			{
				printf("a小于999\n");
			}
		}
	}
	else
	{
		printf("马宝国\n");
	}

	return 0;
}

#include <stdio.h>

int main(void)
{
	int i = 0,sum = 0;
	while(++i < 101)
	{
		sum += i;
	}
	printf("sum = %d\n",sum);

	return 0;
}

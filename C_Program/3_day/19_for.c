#include <stdio.h>

int main(void)
{
	int i,j,k;

	for(i = 0;i < 6;i++)//外层决定输出行数
	{
		for(j = 0;j < i;j++)
		{
			printf("_");
		}
		for(k = 0;k <= i;k++)
		{
			printf("%c",'F'-k);
		}
		printf("\n");
	}

	return 0;
}

#include <stdio.h>

int main(void)
{
	int i,j;
	for(i = 0;i < 5;i++)//外层循环决定打印行数
	{
		for(j = 0;j < 4-i;j++)
		{
			putchar(' ');
		}
		for(j = 0;j < 2*i+1;j++)
		{
			putchar('*');
		}
		puts("");
	}

	return 0;
}

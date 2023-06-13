#include <stdio.h>

int main(void)
{
	int a[3][4] = {
				{1,4,2,5},
				{2,6,0,9},
				{77,3,99,8}
	};
	int *p = a[0],i,j;
#if 1
	for(i = 0;i < 12;i++)
	{
			printf("%d\t",*(p+i));
	}
#endif
	puts("");
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 4;j++)
		{
			printf("%d\t",*(*(a+i)+j));
		}
	}

	return 0;
}

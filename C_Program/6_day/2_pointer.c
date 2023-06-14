#include <stdio.h>

int main(void)
{
	int a[2][4] = {
				{3,2,5,6},
				{8,0,9,1}
	};

	int (*p)[4] = a;
	int i,j;
//	int (*p)[4] = &a[0];
#if 0
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 4;j++)
		{
			printf("%d\t",*(*(p+i)+j));
		}
		puts("");
	}
	printf("\n");
#endif
#if 0
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 4;j++)
		{
			printf("%d\t",p[i][j]);
		}
		puts("");
	}
	puts("");
#endif
	for(i = 0;i < 8;i++)
	{
		printf("%d\t",*(*p+i));
	}
	printf("\n");



	return 0;
}

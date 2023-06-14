#include <stdio.h>

int main(void)
{
	int i,j,sum1 = 0,sum2 = 0;
	int a[2][3] = {
				{2,4,5},
				{8,7,9}
	};

	int *p[2] = {a[0],a[1]};
	int **q = p;
#if 0
	p[0] = a[0];
	p[1] = a[1];
	p[0] = &a[0][0];
	p[1] = &a[1][0]
#endif
#if 0
	for(i = 0;i < 3;i++)
	{
		sum1 += *(p[0]+i);
	}
	for(j = 0;j < 3;j++)
	{
		sum2 += *(p[1]+j);
	}
	printf("和为:%d\n",sum1+sum2);
#endif
	for(i = 0;i < 6;i++)
	{
		sum1 += *(*p+i);
	}
	printf("和为%d\n",sum1);


	return 0;
}

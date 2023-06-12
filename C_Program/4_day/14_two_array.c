#include <stdio.h>

int main(void)
{
	int i,j;
#if 0
	/*全部初始化*/
	int a[3][2] = {
				   {1,2},
		           {3,4},
				   {5,6}
				   };
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
#endif
#if 0
	/*按照排列顺序初始化*/
	int a[3][2] = {1,2,3,4,5,6};
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
#endif
#if 0
	/*部分初始化*/
	int a[3][2] = {1,2,3,4};
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
#endif
#if 0
	/*部分初始化*/
	int a[3][2] = {
				   {1},
		           {2,3},
				   };
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
#endif
	/*不指定长度初始化*/
	int a[][2] = {1,2,3,4,5};//只能省略行号，不能省略列号
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}

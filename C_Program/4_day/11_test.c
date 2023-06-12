#include <stdio.h>
#include <strings.h>
#include <string.h>

int main(void)
{
	int i;
#if 0
	/*全部初始化*/
	int a[5] = {1,2,3,4,5};
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
#endif
#if 0
	/*部分初始化*/
	int a[5] = {1}; 
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
#endif
#if 0
	/*初始化为0*/
	int a[5] = {0}; 
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
#endif
#if 0
	/*初始化为0*/
	int a[5];
	bzero(a,5);	
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
#endif
#if 0
	/*初始化为0*/
	int a[5];
	memset(a,0,5);
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
#endif
#if 0
	/*指定元素初始化*/
	int a[5]={1,2,3,[4] = 1};	
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
#endif
	/*不指定数组长度初始化*/
	int a[] = {1,2,3,4,5,6,7,8,9};
	for(i = 0;i < sizeof(a)/sizeof(int);i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");

	return 0;
}

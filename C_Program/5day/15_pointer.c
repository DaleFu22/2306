#include <stdio.h>

int main(void)
{
	int a[5] = {1,2,3,4,5};
	int i;
	int *p = a;//相当于p = &a[0]
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",i[a]);
	}
	puts("");
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",*(p+i));
	}
	puts("");
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",p[i]);
	}
	puts("");
#if 0
	for(i = 0;i < 5;i++)
	{
		//a代表首元素地址，是地址常量，常量不能进行赋值操作和自增操作
		printf("%d\t",*(a++));
	}
	puts("");
#endif
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",*(p++));
	}
	puts("");


	return 0;
}

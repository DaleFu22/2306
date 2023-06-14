#include <stdio.h>

void func(int *a,int *b);

int main(void)
{
	int a = 3,b = 4;
	printf("调用函数前:a = %d\tb = %d\n",a,b);

	func(&a,&b);
	printf("调用函数后:a = %d\tb = %d\n",a,b);

	return 0;
}

void func(int *a,int *b)
{
	printf("a = %d\n",*a);
	printf("b = %d\n",*b);
	*a = 5;
	*b = 6;
}

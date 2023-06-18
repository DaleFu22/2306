#include <stdio.h>

int b;
int c = 9;
static int d = 666;

int main(void)
{
	int a;
	static int e;

	printf("局部变量a:%p\n",&a);
	printf("未初始化的全部变量b:%p\n",&b);
	printf("初始化的全部变量c:%p\n",&c);
	printf("静态全局部变量d:%p\n",&d);
	printf("静态局部变量e:%p\n",&e);

	return 0;
}

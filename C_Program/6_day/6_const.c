#include <stdio.h>

int main(void)
{
	const int a = 10;
//	a = 666;//不合法，因为a是常变量
	int *p = &a;
	*p = 666;//可以通过一个指针变量来改变a的值，也就是说a还是变量

	printf("a = %d\n",a);

	return 0;
}

#include <stdio.h>
//extern int n = 9;//声明是不能同时赋初值的
extern int n;

void print()
{
	printf("&n = %p\n",&n);
	printf("%d\n",n);
}

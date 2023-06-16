/*
 *数组元素作为实参传递，即值传递或者叫复制传递
 */

#include <stdio.h>

void print_array(int n);

int main(void)
{
	int i;
	int a[5] = {5,3,6,8,9};

	for(i = 0;i < 5;i++)
	{
		print_array(a[i]);
	}
	puts("");

	return 0;
}

void print_array(int n)
{
	printf("%d\t",n);
}

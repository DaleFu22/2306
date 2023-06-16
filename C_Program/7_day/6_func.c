/*
 *以数组名作为实参进行传递，传的是地址
 */

void print_array(int *);//声明时可以省略变量名

#include <stdio.h>

int main(void)
{
	int a[5] = {8,6,0,4,3};
	
	print_array(a);
	
	return 0;
}

void print_array(int *p)
{
	int i;
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",*(p+i));
//		printf("%d\t",p[i]);
	}
	puts("");
}

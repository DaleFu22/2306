/*
 *以数组名作为实参进行传递，传的是地址
 */

void print_array(int p[]);//声明时可以省略变量名

#include <stdio.h>

int main(void)
{
	int a[5] = {8,6,0,4,3};
	printf("sizeof(a) = %lu\n",sizeof(a));
	
	print_array(a);
	
	return 0;
}

//此时不会再分配同等大小的数组p[5],int p[值],这里的值随便给，必给都行
void print_array(int p[])
{
	int i;
	printf("sizeof(p) = %lu\n",sizeof(p));
	for(i = 0;i < 5;i++)
	{
//		printf("%d\t",*(p+i));
		printf("%d\t",p[i]);
	}
	puts("");
}

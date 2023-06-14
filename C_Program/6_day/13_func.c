/*
 *brief:实现一个函数，传两个参数，打印x的n次方
 */
#include <stdio.h>

void x_n(float x,int n);

int main(void)
{
	float x;
	int n;
	printf("请输入:");
	scanf("%f%d",&x,&n);
//	x_n(2,3);
	x_n(x,n);//x和n是实参

	return 0;
}

void x_n(float x,int n)
{
	float sum = 1;
	int i;
	for(i = 0;i < n;i++)
	{
		sum *= x;
	}
	printf("%f\n",sum);
}


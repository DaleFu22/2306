/*
 *brief:实现一个函数，传两个参数，打印x的n次方
 */
//#include <stdio.h>
#include "stdio.h"

float x_n(float x,int n);

int main(void)
{
	float x;
	int n;
	float ret;
	printf("请输入:");
	scanf("%f%d",&x,&n);
//	x_n(2,3);
//	ret = x_n(x,n);//x和n是实参
//	ret = x_n(x,n-1);
//	printf("ret = %f\n",ret);
//	printf("ret = %f\n",x_n(x,n));//函数调用，可以直接放在printf里面

	ret = x_n(x_n(x_n(x,n),n),3);//函数调用，可以作为其他函数的参数
	printf("ret = %f\n",ret);

	return 0;
}

float x_n(float x,int n)
{
	float sum = 1;
	int i;
	for(i = 0;i < n;i++)
	{
		sum *= x;
	}

	return sum;
}


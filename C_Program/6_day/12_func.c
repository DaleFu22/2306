/*
 *brief:写一个函数，实现传两个参数，并求和
 */
#include <stdio.h>

/*函数声明*/
//void Summation(int a,int b);//函数声明必须写在调用之前
//void Summation( a,int b);//函数声明时形参类型不能省略
void Summation(int ,int );//函数声明时，形参可以省略变量名

#if 0
//函数如果放在被调用之前，不用加声明也可被正常调用
void Summation(int a,int b)
{
	int sum;
	sum = a+b;
	printf("sum = %d\n",sum);
}
#endif

int main(void)
{
	int a,b,sum;
//	printf("请输入:");
//	scanf("%d%d",&a,&b);
	Summation(3,4);

	return 0;
}


void Summation(int a,int b)
{
	int sum;
	sum = a+b;
	printf("sum = %d\n",sum);
}


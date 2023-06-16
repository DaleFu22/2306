#include <stdio.h>

int i = 9;
//全局变量，如果未初始化，则默认变量的值为0
//作用域范围，从定义位置开始到整个工程所有文件
//生存周期是从定义的时刻开始一直到整个工程结束

void func1(void);


int main(void)
{
	printf("i = %d\n",i);
	
	func1();
	printf("i = %d\n",i);

	return 0;
}

void func2(void);//函数声明只需要写在被调用之前就可以了
void func1(void)
{
	i = i+1;
	func2();
}

void func2(void)
{
	i = i+2;
}

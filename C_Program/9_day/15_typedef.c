#include <stdio.h>

#define PI	3.14
//typedef 3.14 P;//typedef只对类型有效
#define P int

//typedef int P;//typedef相当于给类型取一个别名 

int main(void)
{
	int a = 7;
	P b = 8;
	P c = a+b;

	printf("a = %d\nb = %d\nc = %d\n",a,b,c);

	return 0;
}

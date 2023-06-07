#include <stdio.h>

int main(void)
{
	int a=15, b=8,c;
	double x=15, y=8, z;
	c = a + b ;    // c 赋值为 
	c = a - b;      // c 赋值为
	c = a * b;     // c 赋值为
	c = a / b;      // c 赋值为
	c = a % b;    // c 赋值为
	z = x + y ;     //z 赋值为 
	z = x - y;        // z 赋值为
	z = x * y ;     // z 赋值为
	z = x / y ;     // z 赋值为
//	z = x % y ;   //编译不通过，因为取余运算不能有浮点型  


	return 0;
}

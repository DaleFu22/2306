#include <stdio.h>

int main(void)
{
	int  x=5, y=9, z;
	z =  ++x ;   // z赋值为，x 变为
	z =  x++ ;   // z赋值为，x 变为
	z =  --x ;    // z赋值为，x 变为
	z =  x-- ;    // z赋值为，x 变为
	z= ++x + y++ ;  // z赋值为，x 变为，y 变为
	z= --x + y++ ;   // z赋值为，x 变为，y 变为
	z= ++x + y-- ;   // z赋值为，x 变为，y 变为

	printf("z = %d\n",z);

	return 0;
}

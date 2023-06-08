#include <stdio.h>

int main(int argc,char **argv) 
{
	int x,y=25; 
	x=70;                   // 给x赋值为70
	y=  x++ > 70 ? 100 : 0 ;    // 给y赋值为0
	printf("x=%d\ty=%d\n", x, y);
	
	return 0;
} 


#include <stdio.h>

int main(void)
{
	int a=1234;
	float f=123.456; 
	printf("%08d\n",a); 
	printf("%010.2f\n",f); 
	printf("%0+8d\n",a);    
	printf("%0+10.2f\n",f); 
	

	return 0;
}

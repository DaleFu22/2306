#include <stdio.h>

int main(void)
{
	char a,b,u,v;
	a = 'F';
	b = 'A'+2;
	u = ' '+'B';
	v = 'b'-32;

	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("u = %d\n",u);
	printf("v = %d\n",v);

	printf("a = %c\n",a);
	printf("b = %c\n",b);
	printf("u = %c\n",u);
	printf("v = %c\n",v);

	return 0;
}

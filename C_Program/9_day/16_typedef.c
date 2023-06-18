#include <stdio.h>

#define P int*
typedef int* Q;

int main(void)
{
	P a,b;
	Q c,d;

	printf("&a = %lu\n",sizeof(a));
	printf("&b = %lu\n",sizeof(b));
	printf("&c = %lu\n",sizeof(c));
	printf("&d = %lu\n",sizeof(d));

}

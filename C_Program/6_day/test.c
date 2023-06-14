#include <stdio.h>

int main(void)
{
	unsigned char *p1;
	unsigned long *p2;
	p1 = (unsigned char*)0x801000;
	p2 = (unsigned long*)0x810000;

	printf("p1 = %p\n",p1);
	printf("p2 = %p\n",p2);
	printf("p1+5 = %p\n",p1+5);
	printf("p2+5 = %p\n",p2+5);
}

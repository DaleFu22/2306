#include <stdio.h>

int main(void)
{
	int a = 10;
	char b = 'f';
	int *p = &a;
	char *q = &b;

	printf("a = %d\n",a);
	printf("a = %d\n",*(&a));
	printf("a = %d\n",*p);
	printf("b = %c\n",b);
	printf("b = %c\n",*(&b));
	printf("b = %c\n",*q);
	printf("============================================\n");

	printf("sizeof(p) = %lu\n",sizeof(p));
	printf("sizeof(q) = %lu\n",sizeof(q));
	printf("sizeof(*p) = %lu\n",sizeof(*p));
	printf("sizeof(*q) = %lu\n",sizeof(*q));

	return 0;
}

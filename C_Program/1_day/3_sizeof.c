#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool a;
	char b;
	short c;
	int d;
	long e;
	float f;
	double g;
	char *h;

	printf("sizeof(a) = %lu\n",sizeof(a));
	printf("sizeof(b) = %lu\n",sizeof(b));
	printf("sizeof(c) = %lu\n",sizeof(c));
	printf("sizeof(d) = %lu\n",sizeof(d));
	printf("sizeof(e) = %lu\n",sizeof(e));
	printf("sizeof(f) = %lu\n",sizeof(f));
	printf("sizeof(g) = %lu\n",sizeof(g));
	printf("sizeof(h) = %lu\n",sizeof(h));
	printf("sizeof(long long) = %lu\n",sizeof(long long));
	printf("sizeof(long double) = %lu\n",sizeof(long double));

	return 0;
}

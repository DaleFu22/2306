#include <stdio.h>
#include <string.h>

struct test{
	long n;
	char x;
	long double m;
	char z;
};
struct student{
		char a;
		int b;
		struct test t;
		float c;
		short d;
		long e;
};


int main(void)
{
	struct student zs;

	printf("sizeof(zs) = %lu\n",sizeof(zs));
	printf("sizeof(struct student) = %lu\n",sizeof(struct student));

	printf("%p\n",&zs.b);
	printf("%p\n",&zs.t.n);

	return 0;
}

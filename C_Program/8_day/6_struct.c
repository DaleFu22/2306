#include <stdio.h>

struct test{
		char a:6;
		int b:20;
		char c:6;
};

int main(void)
{
	struct test t0;
	printf("sizeof(t0) = %lu\n",sizeof(t0));
	return 0;
}

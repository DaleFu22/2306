
#include <stdio.h>

struct test{
		char a:6;
		char b:3;
};

int main(void)
{
	struct test t;
	printf("sizeof(t) = %lu\n",sizeof(t));

//	printf("%p\n",&t.b);//违法，位域不能打印地址，因为存储的基本单位是字节不是位

	return 0;
}

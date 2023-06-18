#include <stdio.h>

union test{
		short a;//2字节
		char b;//1字节
};

int main(void)
{
	union test t;
	t.a = 0x1234;

	printf("%p\n",&t.a);
	printf("%p\n",&t.b);

	if(t.b == 0x34)
	{
		printf("小端序\n");
	}
	else
	{
		printf("大端序\n");
	}

	return 0;
}

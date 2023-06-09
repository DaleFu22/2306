#include <stdio.h>

int main(void)
{
	int i = 100;
	printf("hello\n");

	goto A;
	printf("你好\n");
	printf("你好\n");
	printf("你好\n");
	printf("你好\n");
	printf("你好\n");
	printf("你好\n");
	printf("你好\n");

A:{
	printf("我是goto跳转过来的\n");
}

	return 0;
}

#include <stdio.h>

int main(void)
{
	int i = 2;
#if 0
	if(i = 1)
	{
		printf("hello\n");
	}
#endif
	if(i == 1)
	{
		printf("你好\n");
	}

	printf("i = %d\n",i);

	return 0;
}

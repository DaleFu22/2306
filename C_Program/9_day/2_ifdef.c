#include <stdio.h>

#define TEST

int main(void)
{
#ifdef TEST
	printf("你好\n");
#else
	printf("世界\n");
#endif
}

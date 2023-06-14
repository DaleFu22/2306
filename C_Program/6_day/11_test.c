#include <stdio.h>

int main(void)
{
	char ch[]={"abc\0def"},*p = ch;
	printf("%c\n",*p+4);

	return 0;
}

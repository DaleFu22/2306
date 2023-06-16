#include <stdio.h>
#include <string.h>

char *mystring(void)
{
	static char str[20];//这里必须加上static
	strcpy(str, "Hello");
	return str;
}

int main(void)
{
	printf("%s\n", mystring());
	return 0;
}


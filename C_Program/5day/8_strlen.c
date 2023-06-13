#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[20] = "hello";
	char s2[] = "hello";
	printf("sizeof(s1) = %lu\n",sizeof(s1));
	printf("strlen(s1) = %lu\n",strlen(s1));
	printf("sizeof(s2) = %lu\n",sizeof(s2));
	printf("strlen(s2) = %lu\n",strlen(s2));

	return 0;
}

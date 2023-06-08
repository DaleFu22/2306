#include <stdio.h>

int main(void)
{     
	char string[15];
	printf("Input a string:");
	gets(string);
	printf("%s\n", string);
	puts(string);
	puts("\n");
	
	return 0;
}


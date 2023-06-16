#include <stdio.h>

char *delspace(char * s);

int main(void) 
{
	char str[] = "  How   are   you?";

	printf("%s\n", delspace(str));
	puts(str);

	return 0;
}

char *delspace(char *s)
{
	char * p = s;
	char * t = s;

	while (*s != '\0')
   	{
		if (*s != ' ')
	   	{
			*p = *s;
			p++;
		}
		s++;
	}
	*p = '\0';

	return t;
}


#include <stdio.h>
#include <strings.h>

int main(void)
{
	int i=0;
	char s[100];
	bzero(s,100);

	while((s[i++] = getchar()) != '\n')
	{

	}
	printf("%s\n",s);

	return 0;
}

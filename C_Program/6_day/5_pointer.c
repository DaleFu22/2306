#include <stdio.h>

int main(void)
{
	char *ps[3] = {"how","are","you"};
	int i;

	printf("%p\n",ps);
	printf("%p\n",ps[0]);

	for(i = 0;i < 3;i++)
	{
		printf("%s\t",ps[i]);
	}
	puts("");

	return 0;
}

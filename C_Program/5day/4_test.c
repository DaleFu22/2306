#include <stdio.h>

int main(void)
{
	int i,j;
	char temp;
	char c;
	char s[100] = {0};
	printf("请输入:");
	while((c = getchar()) != '\n')
	{
		s[i++] = c;
	}

	i--;
#if 0
	for(j = 0;j < i/2;j++)
	{
		temp = s[j];
		s[j] = s[i-j];
		s[i-j] = temp;
	}
#endif
	for(j = 0;j < i;j++)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i--;
	}

	printf("%s\n",s);

	return 0;
}

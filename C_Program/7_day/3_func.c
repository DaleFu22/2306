#include <stdio.h>

int find_low_character(char *p);

int main(void)
{
	char ch;
	int i = 0,count;
	char s[100] = {0};
	printf("请输入:");

	while((ch = getchar()) != '\n')
	{
		s[i++] = ch;
	}

	printf("%s\n",s);
	count = find_low_character(s);
	printf("小写字母个数:%d\n",count);
	printf("%s\n",s);

	return 0;
}

int find_low_character(char *p)
{
	int count=0;
	while(*p != '\0')
	{
		if(*p <= 'z' && *p >= 'a')
		{
			count++;
			*p = *p - 32;
		}
		p++;
	}

	return count;
}

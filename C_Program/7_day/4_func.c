#include <stdio.h>

int find_low_character(char *p);

int main(void)
{
	char ch;
	int count;
	int i = 0;
	char s[100] = {0};
	printf("请输入:");

	while( (ch = getchar()) != '\n')
	{
		s[i++] = ch;
	}


	count = find_low_character(s);
	printf("小写字母个数:%d\n",count);
	printf("转换后:%s\n",s);

	return 0;
}

int find_low_character(char *p)
{
	int count = 0;
	while(*p != '\0')
	{
		if(*p >= 'a' && *p <= 'z')
		{
			count++;
			*p = *p - 32;
		}
		p++;
	}

	return count;
}

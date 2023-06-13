#include <stdio.h>

int main(void)
{
//	char s[50] = {'\0'};
	char s1[50] = {0};
	char s2[50] = {0};
	char s3[50] = {0};
	
	printf("请输入:");
	scanf("%s%s%s",s1,s2,s3);

	printf("%s %s %s\n",s1,s2,s3);

	return 0;
}

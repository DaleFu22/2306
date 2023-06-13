#include <stdio.h>
#include <string.h>

int main(void)
{
	int a =2,b = 3;
	a = b;
	char s1[20] = "howwww";
	char s2[20] = "are";
//	s1 = s2;//不合法
	printf("%s\n",s1);
	strcpy(s1,s2);
	printf("%s\n",s1);
}

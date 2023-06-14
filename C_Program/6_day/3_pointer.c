#include <stdio.h>

int main(void)
{
	char s1[20] = "hello";

	s1[2] = 'w';
	printf("%s\n",s1);

	char *s2 = "world";

	s2 = "how";//合法，只是改变了s2的指向，没有改变只读常量区里的内容

//	*s2 = 'p';//访问非法内存
	printf("%s\n",s2);

	return 0;
}

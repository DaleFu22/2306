#include <stdio.h>

int main(void)
{
	int a = 8;
	int b = 90;
#if 0
	const int *p = &a;//*p不能变，p可以变

//	*p = 666;//不合法
	p = &b;
	printf("%d\n",*p);
#endif
#if 0
	int const *p = &a;//*p不能变，p可以变
//	*p = 666;//不合法
	p = &b;
	printf("%d\n",*p);
#endif
#if 0
	int *const p = &a;//*p能变，p不能变
	*p = 666;
//	p = &b;//不合法
	printf("%d\n",*p);
#endif
	int const * const p = &a;//*p不能变，p也不能变
	*p = 666;
	p = &b;
	printf("%d\n",*p);

	return 0;
}

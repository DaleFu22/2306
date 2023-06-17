#include <stdio.h>

union {
		int a;
		char b;
		long c;
}s1 = {.b = 'g'};
//联合体所有成员是共享一块内存单元，以最大成员作为联合体的内存大小
int main(void)
{
//	union test t = {13};
	union test t= {.b = 'f'};//联合体初始化只能初始化一个成员

	t.a = 13;

	printf("%d\n",t.a);
	printf("%d\n",t.b);
	printf("%lu\n",sizeof(t));

	printf("%c\n",s1.b);

	return 0;
}

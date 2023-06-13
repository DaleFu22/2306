#include <stdio.h>

int main(void)
{
	int a[5] = {1,2,3,4,5};
	int *p = a;
//	int *q = &a;//类型不匹配，因为&a是代表整个数组的大小

	printf("%p\n",p);
	printf("%p\n",p+1);
	printf("%p\n",&a);
	printf("%p\n",&a+1);

	printf("%p\n",a);
	printf("%p\n",a+1);
	printf("sizeof(a) = %lu\n",sizeof(a));

	return 0;
}

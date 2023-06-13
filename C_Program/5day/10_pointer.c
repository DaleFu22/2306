#include <stdio.h>

int main(void)
{
	int a[3] = {1,2,3};
	int *p = &a[0];
	int *q = &a[2];


	printf("执行p+1之前：%p\n",p);
//	int *p = a;
	p = p+1;
	printf("执行p+1之后：%p\n",p);
	
	printf("q-p = %ld\n",q-p);

	return 0;
}

#include <stdio.h>

int main(void)
{
	int a[5] = {666,2,3,4,5};
	char s = 'f';

	int *p = &a[0];
	int *q = &a[3];
	char *m = &s;

	printf("(p>q) = %d\n",p>q);
//	printf("(p>q) = %d\n",m>q);//不合法，比较时必须是同类型指针变量
//	printf("(p>q) = %d\n",p>2);//不合法
	printf("(p>q) = %d\n",p>0);//合法

	return 0;
}


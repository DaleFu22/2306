#include <stdio.h>
#include <stdlib.h>

int main(void)
{
#if 0
	void *p;
	p = malloc(4);
#endif
	int *p;
//	p = (int *)malloc(4);
	p = (int *)malloc(sizeof(int));

	*p = 666;
	printf("%d\n",*p);

	free(p);//释放内存
	p = NULL;//防止p变成野指针
}

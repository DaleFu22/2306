#include <stdio.h>

int main(void)
{
	int i;
	int a[7] = {1,4,2,6,7,8,9};
	void *p = a;

	for(i = 0;i < 7;i++)
	{
		printf("%d\t",*((int *)p+i));
	}
	puts("");

	return 0;
}

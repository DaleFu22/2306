#include <stdio.h>

void swap(int *x,int *y);

int main(void)
{
	int a,b;
	printf("请输入:");
	scanf("%d%d",&a,&b);

	printf("交换前:a = %d\tb = %d\n",a,b);	
	swap(&a,&b);
	printf("交换后:a = %d\tb = %d\n",a,b);

	return 0;
}

void swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

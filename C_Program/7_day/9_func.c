#include <stdio.h>

void flip_array(int *p,int num);
int main(void)
{
	int i;
	int a[5] = {1,4,2,6,8};
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
	flip_array(a,5);
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");

	return 0;
}

void flip_array(int *p,int num)
{
	int i,temp;
	for(i = 0;i < num/2;i++)
	{
		temp = *(p+i);
		*(p+i) = *(p+num-1-i);
		*(p+num-1-i) = temp;
	}
}

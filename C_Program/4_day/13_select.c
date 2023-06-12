#include <stdio.h>

int main(void)
{
	int a[7] = {4,1,2,7,5,3,6};
	int i,j,temp;

	/*选择排序*/
	for(i = 0;i < 6;i++)
	{
		for(j = i+1;j < 7;j++)
		{
			if(a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for(i = 0;i < 7;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");

	return 0;
}

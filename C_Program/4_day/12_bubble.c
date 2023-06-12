#include <stdio.h>

int main(void)
{
	int a[7] = {3,1,4,2,6,7,5};
	int i,j,temp,count = 0;

	//冒泡排序
	for(i = 0;i < 6;i++)
	{
		for(j = 0;j < 6-i;j++)
		{
			if(a[j] > a[j+1])
			{
				count++;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		if(count == 0)
		{
			break;
		}
		count = 0;
	}

	for(i = 0;i < 7;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");

	return 0;
}

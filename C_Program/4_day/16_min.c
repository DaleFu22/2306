#include <stdio.h>

int main(void)
{
	int a[3][4] = {{1,4,2,6},{-1,5,7,9},{-8,0,5,33}};
	int min,x,y,i,j;
	min = a[0][0];
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 4;j++)
		{
			if(min > a[i][j])
			{
				min = a[i][j];
				x = i;
				y = j;
			}
		}
	}
	printf("最小元素是:%d\n行号:%d\n列号%d\n",min,x,y);

	return 0;
}

/*
 *以数组名做实参进行传递，传递的是行地址，所以定义行指针变量接收
 */

#include <stdio.h>

void print_array(int (*a)[3],int row,int column);

int main(void)
{
	int a[2][3] = {
				{7,0,9},
				{2,5,4}
	};
	print_array(a,2,3);

	return 0;
}

void print_array(int (*a)[3],int row,int column)
{
	int i,j;
	for(i = 0;i < row;i++)
	{
		for(j = 0;j < column;j++)
		{
			printf("%d\t",*(*(a+i)+j));
			printf("%d\t",a[i][j]);
		}
		puts("");
	}
}

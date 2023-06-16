/*
 *以数组名做实参进行传递，传递的是行地址，所以定义行指针变量接收
 */

#include <stdio.h>

void print_array(int a[][3],int row,int column);

int main(void)
{
	int a[2][3] = {
				{7,0,9},
				{2,5,4}
	};
	printf("sizeof(a) = %lu\n",sizeof(a));
	print_array(a,2,3);

	return 0;
}

//在形参中，int a[行][列],这里的行可以随意更改，但是列不能动。
void print_array(int a[][3],int row,int column)
{
	int i,j;
	printf("sizeof(a) = %lu\n",sizeof(a));
	for(i = 0;i < row;i++)
	{
		for(j = 0;j < column;j++)
		{
			printf("%d\t",*(*(a+i)+j));
//			printf("%d\t",a[i][j]);
		}
		puts("");
	}
}

/*
 *二维数组元素作实参传递，值传递或复制传递
 */

#include <stdio.h>

void print_array(int n);

int main(void)
{
	int i,j;
	int a[2][3] = {
				{2,9,6},
				{4,5,8}
	};
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			print_array(a[i][j]);
		}
		puts("");
	}
	

	return 0;
}

void print_array(int n)
{
	printf("%d\t",n);
}

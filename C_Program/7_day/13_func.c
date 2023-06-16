/*
 *指针数组数组名作为函数实参，传递的是一个二级指针，形参可以定义成二级指针形式或
 *直接定义成指针数组形式
 */

#include <stdio.h>
#include <string.h>

void sort_string_array(char **name);
int main(void)
{
	int i;
	char *name[3] = {"red","blue","green"};//字符串存放在只读常量区，排序只能改指向，不能改内容
	printf("排序前:");
	for(i = 0;i < 3;i++)
	{
		printf("%s\t",name[i]);
	}
	puts("");

	sort_string_array(name);

	printf("排序后:");
	for(i = 0;i < 3;i++)
	{
		printf("%s\t",name[i]);
	}
	puts("");
	return 0;
}
#if 0
/*冒泡排序*/
void sort_string_array(char *name[3])
{
	int i,j;
	char *temp;
	for(i = 0;i < 3-1;i++)//比较的趟数
	{
		for(j = 0;j < 3-1-i;j++)//每一趟比较的次数
		{
//			name[j] > name[j+1];//这个比的是字符串在内存中的地址前后关系
			if(strcmp(name[j],name[j+1]) > 0)
			{
				temp = name[j];
				name[j] = name[j+1];
				name[j+1] = temp;
			}
		}
	}
}
#endif
/*选择排序*/
void sort_string_array(char **name)
{
	int i,j;
	char *temp;
	for(i = 0;i < 3-1;i++)//比较的趟数
	{
		for(j = i+1;j < 3;j++)//每一趟比较的次数
		{
//			name[j] > name[j+1];//这个比的是字符串在内存中的地址前后关系
			if(strcmp(name[i],name[j]) > 0)
			{
				temp = name[i];
				name[i] = name[j];
				name[j] = temp;
			}
		}
	}
}


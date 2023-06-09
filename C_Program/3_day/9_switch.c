#include <stdio.h>

int main(void)
{
	int score;
	printf("请输入分数查等级:");
	scanf("%d",&score);

	if(score >= 0 && score <= 100)
	{
		switch(score/10)
		{
			case 10:
			case 9:
				{
					printf("A\n");
				}
				break;
			case 8:
				{
					printf("B\n");
				}
				break;
			case 7:
				{
					printf("C\n");
				}
				break;
			case 6:
				{
					printf("D\n");
				}
				break;
			default:
				{
					printf("E\n");
				}
		}
	}
	else
	{
		printf("输入分数不合法\n");
	}
	printf("查看结束\n");

	return 0;
}

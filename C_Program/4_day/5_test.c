#include <stdio.h>

int main(void)
{
	int age,y0,y1,m0,m1,d0,d1;

	printf("请输入出生日期:");
	scanf("%d%d%d",&y0,&m0,&d0);
	printf("请输入当前日期:");
	scanf("%d%d%d",&y1,&m1,&d1);

	if(m0 <= m1)
	{
		if(m0 == m1)
		{
			if(d0 <= d1)
			{
				age = y1-y0;
			}
			else
			{
				age = y1-y0-1;
			}
		}
		else
		{
			age = y1-y0;
		}

	}
	else
	{
		age = y1-y0-1;
	}

	printf("age = %d\n",age);
}

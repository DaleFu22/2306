#include <stdio.h>

int judge_endian(void);

int main(void)
{
	int ret = 999;
	
	ret = judge_endian();
	if(ret == 1)
	{
		printf("小端序\n");
	}
	else if(ret == 0)
	{
		printf("大端序\n");
	}

	return 0;
}
#if 0
//此方法不推荐
int judge_endian(void)
{
	short a = 0x1234;
	char b = (char)a;

	if(b == 0x34)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
#endif

int judge_endian(void)
{
	short a = 0x1234;
	char *b = (char*)&a;

	if(*b == 0x34)
	{
		return 1;//小端序
	}
	else
	{
		return 0;//大端序
	}
}

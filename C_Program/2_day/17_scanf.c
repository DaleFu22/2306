#include <stdio.h>

int main(void)
{
	int x;
	char ch;
	scanf("%d",&x);
//	scanf(" %c",&ch);//通过空格吃掉垃圾字符
//	scanf("%*c%c",&ch);//通过抑制符吃掉垃圾
	while((ch=getchar()) != '\n')//吃掉垃圾回车
	{
//	scanf("%c",&ch);
		printf("ch=%c\n",ch);
	}
	return 0;
}

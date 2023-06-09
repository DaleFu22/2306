#include <stdio.h>

#if 0
int main(void)
{
	int i = 0,sum = 0;
	for(;i < 1001;i++)
	{
		sum += i;
	}
	printf("sum = %d\n",sum);

	return 0;
}
#endif
#if 0
int main(void)
{
	int i = 0,sum = 0;

	for(;;i++)//死循环
	{
		sum += i;
	}
	printf("sum = %d\n",sum);

	return 0;
}
#endif
#if 0
int main(void)
{
	int i = 0,sum = 0;
	for(;;)//死循环
	{
		sum += i;
	}
	printf("sum = %d\n",sum);

	return 0;
}
#endif
#if 0
int main(void)
{
	int i = 0,sum = 0;
	for(;i < 1001;)
	{
		sum += i;
		i++;
	}
	printf("sum = %d\n",sum);

	return 0;
}
#endif
int main(void)
{
	int i,sum,j;
	for(i = 0,j = 0,sum = 0;i < 1001,j < 100;i++,j++)
	{
		sum += i;
		i++;
	}
	printf("sum = %d\n",sum);
	printf("j = %d\n",j);

	return 0;
}

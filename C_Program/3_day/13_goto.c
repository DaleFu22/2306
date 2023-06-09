#include <stdio.h>

int main(void)
{
	int i = 0,sum = 0;
A:{
	sum += i;
	if(++i > 100)
	{
		printf("sum = %d\n",sum);
		return 0;
	}
  }
  goto A;

	return 0;
}

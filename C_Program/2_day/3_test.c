#include <stdio.h>

int main(int argc, char **argv)
{
	int count, sum;   
	count = 0; sum = 0;
	while (++count < 20) 
	{
	 	sum +=count;
		printf("in:count = %d\n",count);
   	} 
	printf("sum = %d\n", sum);
	printf("out:count = %d\n",count);

	return 0;
}


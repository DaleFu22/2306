#include <stdio.h>
#include <unistd.h>

int main(void)
{
	while(1)
	{
		printf("hello world");
		usleep(2000);
	}

	return 0;
}

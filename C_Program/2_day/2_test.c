#include <stdio.h>

int main(void)
{
	unsigned char x = 0x17,y;
	y = ~x;
	printf("%u\n",y);

	return 0;
}

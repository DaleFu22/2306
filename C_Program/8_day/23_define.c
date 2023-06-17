#include <stdio.h>

#define SQR(x)	((x)*(x))

int main(void)
{
	int s;
	s = SQR(3+1) * SQR(2+5);

	printf("s = %d\n",s);

	return 0;
}

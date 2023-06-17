#include <stdio.h>

#define SUM(x)	(x+x)

int main(void)
{
	int s;
	s = SUM(2) * SUM(3);
	printf("%d\n",s);

	return 0;
}

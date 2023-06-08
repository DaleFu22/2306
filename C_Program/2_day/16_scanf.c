#include <stdio.h>

int main(void)
{
	int ret;
	int a;
	char b;
	float c;
	ret=scanf("%d%c%f",&a,&b,&c);

	printf("%d%c%f\n",a,b,c);

	return 0;
}

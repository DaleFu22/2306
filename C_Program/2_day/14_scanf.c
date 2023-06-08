#include <stdio.h>

int main(void)
{
	int a,b;
	scanf("%2d%*3d%2d",&a,&b);

	printf("a = %d\nb = %d\n",a,b);

	return 0;
}

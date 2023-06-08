#include <stdio.h>

int main(void)
{
	static char a[]="Hello,world!";
	printf("%s\n%15s\n%10.5s\n%2.5s\n%.3s\n",a,a,a,a,a);


	return 0;
}

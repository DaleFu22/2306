#include <stdio.h>

int main(void)
{
	int a[2][3] = {
				{2,5,1},
				{7,9,8}
	};

	printf("**a = %d\n",**a);
	printf("**(a+1) = %d\n",**(a+1));
	printf("*(*(a+1)+1) = %d\n",*(*(a+1)+1));
	printf("*(a[1]+1) = %d\n",*(a[1]+1));

	printf("&a = %p\n",&a);
	printf("&a+1 = %p\n",&a+1);
	printf("a = %p\n",a);
	printf("a+1 = %p\n",a+1);
	printf("a[0] = %p\n",a[0]);
	printf("a[0]+1 = %p\n",a[0]+1);

	return 0;
}

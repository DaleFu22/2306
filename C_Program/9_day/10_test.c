#include <stdio.h>

static int n = 78;

void print();

int main(void)
{
	auto int a = 888;
	static int b;
	char *p = "hello wolrd";
	
	register int c = 999;
	register long double d = 3.14;

	printf("&n = %p\n",&n);
	print();

	printf("c = %d\n",c);
	printf("d = %Lf\n",d);

//	printf("&c = %p\n",&c);
//	printf("&d = %p\n",&d);//寄存器变量不能访问其地址

#if 0
	printf("&a = %p\n",&a);
	printf("p = %p\n",p);
	printf("&p = %p\n",&p);
	printf("&b = %p\n",&b);
	printf("&n = %p\n",&n);
	printf("%d\n",n);
#endif
	{
		int a = 666;
		printf("a = %d\n",a);
	}

	printf("a = %d\n",a);

	return 0;
}

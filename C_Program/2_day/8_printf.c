#include <stdio.h>

int main(void)
{
	printf("hello world\n");
	int a=567;
	double x = 3.141549;
	long double y = 3.1415926535;

	printf("y = %Lf\n",y);
	printf("x = %f\n",x);
	printf("x = %lf",x);
	printf ( "%d\n",a);	//567
	printf("%x\n",a);		//ff
	printf("%o\n",a);		//101
	printf("%#x\n",a);		//ff
	printf("%#o\n",a);		//101
	printf("%u\n",a);		//567
	char b=65;printf("%x\n",b);		//A
	printf("%s\n","ABC");			//ABC
	float c=567.789;printf("%e\n",c);	//5.677890e+02
	float d=567.789;printf("%f\n",d);	// 567.789000
	float e=567.789;printf("%g\n",e);	// 567.789
	printf("%%\n");			 //%

	return 0;
}

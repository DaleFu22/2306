#include <stdio.h>

int main(void)
{
	float a,b,c,t;
	a=4;
	b=5;
	c=2;
	if(a>b) 
	{
		t=a;
		a=b;
		b=t;
	}
	if(a>c)
   	{
		t=a;
		a=c;
		c=t;
	}
	if(b>c)
   	{
		t=b;
		b=c;
		c=t;
	}
	printf("%5.2f,%5.2f,%5.2f",a,b,c);
}


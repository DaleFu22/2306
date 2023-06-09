#include <stdio.h>

int main(void)
{
	float area,r,pi = 3.14;
	for(r=1;r<=10;r++)
	{ 
		area=pi*r*r;
		if(area>100) 
			break;
		printf("%f\n",area);
	}

}

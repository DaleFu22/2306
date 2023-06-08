#include <stdio.h>

int main(void)
{
	int x = 82,y = 101;
	int s1,s2,s3;
	s1 = (x>=y?x+18:y-100);
	s2 = (x<(y-11)?x-22:y-1);
	s3 = (x>y?x+18:y-101?x-22:y-1);
	printf("s1 = %d\n",s1);
	printf("s2 = %d\n",s2);
	printf("s3 = %d\n",s3);

	return 0;
}

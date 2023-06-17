#include <stdio.h>

union u{
	char a;
	int b[5];
	double c;
	int d[3];
};

struct s{
	int e;
	double f;
	short g;
	union u h;
	char i[2];
};

int main(void)
{
	union u U;
	struct s S;
	printf("sizeof(U) = %lu\n",sizeof(U));	
	printf("sizeof(S) = %lu\n",sizeof(S));	

	return 0;
}

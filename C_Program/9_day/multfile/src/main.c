#include "../include/calculator.h"
#include "../include/fun.h"

int main(void)
{
	print_struct();

	printf("%d\n",add_num(9,3));
	printf("%d\n",sub_num(9,3));
	printf("%d\n",mul_num(9,3));
	printf("%d\n",div_num(9,3));

	return 0;
}


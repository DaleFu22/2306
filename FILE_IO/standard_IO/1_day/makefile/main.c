#include <stdio.h>

/*声明*/
int add_num(int a,int b);
int sub_num(int a,int b);
int mul_num(int a,int b);
int div_num(int a,int b);
int test(int a,int b);

int main(void)
{
	printf("%d\n",add_num(9,3));	
	printf("%d\n",sub_num(9,3));	
	printf("%d\n",mul_num(9,3));	
	printf("%d\n",div_num(9,3));	
	printf("%d\n",test(9,3));	

	return 0;
}

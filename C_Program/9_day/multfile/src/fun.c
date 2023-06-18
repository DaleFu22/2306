#include "../include/fun.h"

void print_struct(void)
{
	struct test stu = {23,"zhaosi",58};
	

	printf("%d\t%s\t%f\n",stu.age,stu.name,stu.score);
}

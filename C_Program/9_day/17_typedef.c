#include <stdio.h>

struct test{
		int age;
		char name[20];
		float score;
};

typedef struct test P;//P == struct test
typedef struct test* Q;//Q == struct test *

int main(void)
{
	P stu1 = {15,"lisi",66};
	Q s;
	s = &stu1;

	printf("%d\t%s\t%f\n",stu1.age,stu1.name,stu1.score);
	printf("%d\t%s\t%f\n",s->age,s->name,s->score);

	return 0;
}

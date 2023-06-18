#include <stdio.h>

typedef struct test{
		int age;
		char name[20];
		float score;
}P,*Q;//P == struct test      Q == struct test*
//P和Q是起的别名

struct student{
		char name[50];
		int age;
		float score;
}stu1,stu2;//stu1和stu2是结构体变量


int main(void)
{
	P stu1 = {15,"lisi",66};
	Q s;
	s = &stu1;

	printf("%d\t%s\t%f\n",stu1.age,stu1.name,stu1.score);
	printf("%d\t%s\t%f\n",s->age,s->name,s->score);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct test{
		int age;
		char name[20];
		float score;
};

int main(void)
{
	struct test *p;
	p = (struct test *)malloc(sizeof(struct test));

//	(*p).age = 25;
	p->age = 25;
	strcpy(p->name,"lisi");
	p->score = 66.6;

	printf("%d\t%s\t%f\n",p->age,p->name,p->score);

	free(p);
	p = NULL;

	return 0;
}

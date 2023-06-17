#include <stdio.h>
#include <string.h>

struct student{
		char name[50];
		int num;
		float score;
};

int main(void)
{
	struct student zs;

	printf("sizeof(zs) = %lu\n",sizeof(zs));
	printf("sizeof(struct student) = %lu\n",sizeof(struct student));

	return 0;
}

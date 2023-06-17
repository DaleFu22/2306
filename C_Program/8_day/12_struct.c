#include <stdio.h>
#include <string.h>

struct student{
		char name[50];
		int age;
		float score;
};

int main(void)
{
	int i;
	struct student stu[4];
#if 0
//赋值操作
	strcpy(stu[0].name,"zhangsan");
	stu[0].age = 18;
	stu[0].score = 64;
	strcpy(stu[1].name,"lisi");
	stu[1].age = 24;
	stu[1].score = 65;
	strcpy(stu[2].name,"wangwu");
	stu[2].age = 25;
	stu[2].score = 66;
	strcpy(stu[3].name,"zhaoliu");
	stu[3].age = 19;
	stu[3].score = 100;

	printf("%10s\t%d\t%f\n",stu[0].name,stu[0].age,stu[0].score);
	printf("%10s\t%d\t%f\n",stu[1].name,stu[1].age,stu[1].score);
	printf("%10s\t%d\t%f\n",stu[2].name,stu[2].age,stu[2].score);
#endif

	for(i = 0;i < 4;i++)
	{
		scanf("%s%d%f",stu[i].name,&stu[i].age,&stu[i].score);
	}

	for(i = 0;i < 4;i++)
	{
		printf("%10s\t%d\t%f\n",stu[i].name,stu[i].age,stu[i].score);
	}

	printf("sizeof(stu) = %lu\n",sizeof(stu));

	return 0;
}

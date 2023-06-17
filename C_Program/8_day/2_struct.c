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
	struct student temp;
//	zs = {"zhangsan",115,60.5};//不允许直接对整个结构体进行整体赋值,只能用于初始化的时候
#if 0
//	zs.name = "zhangsan";//违法的
	strcpy(zs.name,"zhangsan");
	zs.num = 113;
	zs.score = 99.5;
#endif
	scanf("%s%d%f",zs.name,&zs.num,&zs.score);

	temp = zs;//同一结构体类型的变量可以进行直接赋值

	printf("%s\t",zs.name);
	printf("%d\t",zs.num);
	printf("%f\n",zs.score);
	printf("%s\t",temp.name);
	printf("%d\t",temp.num);
	printf("%f\n",temp.score);

	printf("sizeof(zs) = %lu\n",sizeof(zs));
	printf("sizeof(struct student) = %lu\n",sizeof(struct student));

	return 0;
}

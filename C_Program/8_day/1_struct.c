#include <stdio.h>

#if 0
//方法1
struct student{
			char name[50];
			int num;
			char sex;
			float score;
};
#endif
#if 1
//方法2
struct student{
			char name[50];
			int num;
			char sex;
			float score;
//}lisi={"lisi",134,'w',99.5};
//}lisi={"lisi",134,};
}lisi={.name = "lisi",.sex = 'w',.score = 99};
#endif
#if 0
struct {
			char name[50];
			int num;
			char sex;
			float score;
//}goudan={"goudan",134,'w',99.5};
//}goudan={"goudan",134,};
}goudan={.name = "goudan",.sex = 'w',.score = 99};
#endif
#if 0
struct {
			char name[50];
			int num;
			char sex;
			float score;
}goudan;
#endif


int main(void)
{
	//方法1方法2初始化
	//完全初始化
//	struct student zs = {"zhangsan",133,'m',100};
	//部分初始化
//	struct student zs = {"zhangsan",133,'m'};
	//指定元素初始化
	struct student zs = {.score = 99,.num = 133,.sex = 'm'};

	return 0;
}
#endif



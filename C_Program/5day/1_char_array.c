#include <stdio.h>

int main(void)
{
	int i;
#if 1
	/*逐个字符进行初始化*/
	char s1[5] = {'h','e','l','l','o'};
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",s1[i]);
	}
	printf("\n");
	printf("%s\n",s1);
	printf("sizeof(s1) = %lu\n",sizeof(s1));
#endif
#if 1
	/*以字符串赋值方式进行初始化*/
	char s2[5] = {"hello"};
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",s2[i]);
	}
	printf("\n");
	printf("%s\n",s2);
	printf("sizeof(s2) = %lu\n",sizeof(s2));
#endif
#if 1
	/*以字符串赋值方式进行初始化*/
	char s3[5] = "hello";
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",s3[i]);
	}
	printf("\n");
	printf("%s\n",s3);
	printf("sizeof(s3) = %lu\n",sizeof(s3));
#endif
	/*不指定长度进行字符串赋值初始化，使用最多的方式*/
	char s4[] = "hello";
	for(i = 0;i < 6;i++)
	{
		printf("%d\t",s4[i]);
	}
	printf("\n");
	printf("%s\n",s4);
	printf("sizeof(s4) = %lu\n",sizeof(s4));

	return 0;
}

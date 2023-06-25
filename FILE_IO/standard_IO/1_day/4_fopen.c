#include <stdio.h>

int main(void)
{
	FILE *fp;
	fp = fopen("hello.txt","a");

	if(fp == NULL)
	{
		perror("fopen");
	}
	else
	{
		printf("open success\n");
	}

	return 0;
}

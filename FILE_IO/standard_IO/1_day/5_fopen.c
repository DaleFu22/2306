#include <stdio.h>

void Usage(char *s)
{
	printf("input error...\n");
	printf("Usage:\n");
	printf("\t%s  [dest_file]\n",s);
	printf("\tdest_file:the destination file is the file need to open...\n");
}

int main(int argc,char *argv[])
{
	FILE *fp;

	if(argc != 2)
	{
		Usage(argv[0]);
	}

	fp = fopen(argv[1],"a");

	if(fp == NULL)
	{
		perror("fopen");
	}
	else
	{
		printf("open success\n");
	}

	fclose(fp);

	return 0;
}

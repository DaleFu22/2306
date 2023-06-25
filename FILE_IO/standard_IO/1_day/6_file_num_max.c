#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define PATH	"./temp"

int main(void)
{
	FILE *fp;
	int count = 0;
	char buf[50]={0};

	while(1)
	{
		snprintf(buf,sizeof(buf),"%s/%d.txt",PATH,count);
		fp = fopen(buf,"w");
		if(fp != NULL)
		{
			count++;
		}
		else
		{
			perror("fopen");
			break;
		}
	}
	printf("能打开的最大文件数:%d\n",count+3);
	if(fp != NULL)
		fclose(fp);

	return 0;
}

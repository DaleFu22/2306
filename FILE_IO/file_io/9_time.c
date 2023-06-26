#include <stdio.h>
#include <time.h>
#include <strings.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	int cnt = 0;
	FILE *fp;
	char buf[50];
	time_t cur_sec = 0;
	struct tm *t;
	fp = fopen("test.txt","a+");

	if(!fp)
	{
		perror("fopen");
		exit(-1);
	}

	//获取test.txt的文件行号
	bzero(buf,sizeof(buf));
	while(fgets(buf,sizeof(buf)-1,fp) != NULL)
	{
		bzero(buf,sizeof(buf));
		cnt++;
	}

	while(1)
	{
		bzero(buf,sizeof(buf));
		cur_sec = time(NULL);
		t = localtime(&cur_sec);
		//1.2023-6-26 15:23:31
		snprintf(buf,sizeof(buf)-1,"%d.%d-%d-%d %d:%d:%d\n",++cnt,t->tm_year+1900,t->tm_mon+1,t->tm_mday,t->tm_hour,t->tm_min,t->tm_sec);
		printf("%s",buf);
		fputs(buf,fp);
		fflush(fp);
		sleep(1);
	}

	return 0;
}

#include <stdio.h>
#include <time.h>
#include <strings.h>

int main(void)
{
	time_t cur_sec = 0;
	char buf[50];
	struct tm *t;

	cur_sec = time(NULL);
	t = localtime(&cur_sec);

	bzero(buf,sizeof(buf));
	snprintf(buf,sizeof(buf)-1,"%d %d %d %d:%d",t->tm_year+1900,t->tm_mon+1,t->tm_mday,t->tm_hour,t->tm_min);

	printf("%s\n",buf);

	return 0;
}

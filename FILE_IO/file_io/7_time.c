#include <stdio.h>
#include <time.h>
#include <strings.h>

int main(void)
{
	char buf[100];
	char *p = buf;
	time_t cur_sec = 0;

	cur_sec = time(NULL);
	
	bzero(buf,sizeof(buf));

	buf = ctime(&cur_sec);

	printf("%s\n",ctime(&cur_sec));
	printf("%s\n",p);
	
	printf("cur_sec = %ld\n",cur_sec);	

	return 0;
}

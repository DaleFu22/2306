#include <stdio.h>
#include <strings.h>

#undef BUFSIZ
#define BUFSIZ 2

int main(void)
{
	char buf[BUFSIZ];

	bzero(buf,sizeof(buf));

	snprintf(buf,sizeof(buf),"%d/%d/%d",9023,6,26);//snprintf比sprintf更安全

	printf("%s\n",buf);

	return 0;
}

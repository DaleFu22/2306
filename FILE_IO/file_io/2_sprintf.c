#include <stdio.h>
#include <strings.h>

#undef BUFSIZ
#define BUFSIZ 50

int main(void)
{
	char buf[BUFSIZ];

	bzero(buf,sizeof(buf));

	sprintf(buf,"%d/%d/%d",2023,6,26);

	printf("%s\n",buf);

	return 0;
}

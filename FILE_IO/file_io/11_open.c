#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

#define PATH	"./dst.txt"

int main(void)
{
	int fd;
	if((fd = open(PATH,O_RDWR | O_CREAT | O_TRUNC | O_EXCL, 0777)) < 0)
	{
		printf("the file is exists\n");
		if(errno == EEXIST)
		{
			if((fd = open(PATH,O_RDWR | O_APPEND)) < 0)
			{
				perror("open");
			}
		}
	}

	printf("fd = %d\n",fd);

	close(fd);

	return 0;
}

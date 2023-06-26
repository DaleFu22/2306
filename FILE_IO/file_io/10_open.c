#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

#define PATH	"./dst.txt"

int main(void)
{
	int fd;
	fd = open(PATH,O_RDWR | O_CREAT | O_TRUNC, 0777);
	if(fd < 0)
	{
		perror("open");
		exit(-1);
	}

	return 0;
}

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <strings.h>
#include <string.h>

int main(void)
{
	int fd,fd_new;
	char buf[10] = {0};
	if((fd = open("a.txt",O_RDWR | O_CREAT | O_EXCL | O_TRUNC,0667))<0)
	{
		printf("file was exists\n");
		if(EEXIST == errno)
		{
			if((fd = open("a.txt",O_RDWR)) < 0)
			{	
				perror("open");
				exit(-1);
			}
		}
	}

	printf("%d\n",fd);
	fd_new = dup(fd);

	write(fd_new,"hello",6);
	read(fd,buf,10);

	printf("%s\n",buf);
	printf("fd = %d\nfd_new = %d\n",fd,fd_new);

	close(fd);

	return 0;
}

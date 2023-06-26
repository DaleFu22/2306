#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <strings.h>
#include <string.h>

void Usage(char *s)
{
	printf("Usage:\n");
	printf("\t%s [file_name]\n",s);
	printf("\t[file_name]:the file will be opened\n");
}

int main(int argc,char *argv[])
{
	int fd;
	char buf[50];
	
	if(argc < 2)
	{
		Usage(argv[0]);
		exit(-1);
	}

	if((fd = open(argv[1],O_RDWR | O_CREAT | O_TRUNC | O_EXCL, 0777)) < 0)
	{
		printf("the file is exists\n");
		if(errno == EEXIST)
		{
			if((fd = open(argv[1],O_RDWR | O_APPEND)) < 0)
			{
				perror("open");
			}
		}
	}

	printf("fd = %d\n",fd);

	bzero(buf,sizeof(buf));
	read(0,buf,sizeof(buf)-1);
	write(fd,buf,strlen(buf));
	printf("%s",buf);

	close(fd);

	return 0;
}

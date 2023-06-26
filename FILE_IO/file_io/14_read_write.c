/*
 *从键盘输入数据写入到指定的文件中去，输入quit表示退出
 */
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <strings.h>
#include <string.h>

#define QUIT "quit"

void Usage(char *s)
{
	printf("Usage:\n");
	printf("\t%s [file_name]\n",s);
	printf("\t[file_name]:the file will be opened\n");
}

int main(int argc,char *argv[])
{
	int fd,ret = -1;
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

	while(1)
	{
		bzero(buf,sizeof(buf));
//		printf("Please input:\n");
		fprintf(stderr,"Please input:");

		do{
			ret = read(0,buf,sizeof(buf)-1);
		}while(ret < 0 && EINTR == errno);
		if(ret < 0)//如果ret < 0则是真正的读入出错
		{
			perror("read");
			continue;
		}
		if(!strncasecmp(QUIT,buf,strlen(QUIT)))//忽略大小写进行比较
		{
			printf("少侠再见.....\n");
			break;
		}

		do{
			ret = write(fd,buf,strlen(buf));
		}while(ret < 0 && EINTR == errno);
		if(ret < 0)
		{
			perror("write");
			exit(-1);
		}
	}


	close(fd);

	return 0;
}

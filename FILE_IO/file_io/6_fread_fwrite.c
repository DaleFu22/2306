/*
 *使用fread和fwrite进行文件的拷贝
 */
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

#define SIZE	20

void Usage(char *s)
{
	printf("Usage:\n");
	printf("\t%s [src_file] [dst_file]\n",s);
	printf("\tsrc_file:the file will be copied\n");
	printf("\tdst_file:the file will be pasted\n");
}
int main(int argc,char *argv[])
{
	FILE *fr,*fw;
	int file_size = 0;

	char buf[SIZE];

	if(argc != 3)
	{
		Usage(argv[0]);
		exit(-1);
	}
	//1、打开文件
	fr = fopen(argv[1],"r");
	fw = fopen(argv[2],"w");

	if(!fr || !fw)
	{
		perror("fopen");
		exit(-1);
	}

	//2、读写文件
	fseek(fr,0,SEEK_END);
	file_size = ftell(fr);//获取文件大小
	rewind(fr);//把文件指针指向开头
//	fseek(fr,0,SEEK_SET);

	while(file_size >= SIZE-1)//必须是SIZE-1才是安全的
	{
		bzero(buf,sizeof(buf));
		if(fread(buf,SIZE-1,1,fr) < 0)
		{
			perror("fread");
			continue;
		}
		fwrite(buf,strlen(buf),1,fw);
		file_size -= SIZE-1;
	}

	if(file_size > 0)
	{
		bzero(buf,sizeof(buf));
		fread(buf,SIZE-1,1,fr);
		fwrite(buf,strlen(buf),1,fw);
	}

	//3、关闭文件
	fclose(fr);
	fclose(fw);

	return 0;
}

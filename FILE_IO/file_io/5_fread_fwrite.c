/*
 *使用fread和fwrite进行文件的拷贝
 */
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

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

	char buf[19];

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
	while(!feof(fr) && !ferror(fr))
	{
		bzero(buf,sizeof(buf));
		fread(buf,sizeof(buf)-1,1,fr);
		fwrite(buf,strlen(buf),1,fw);
	}

	//3、关闭文件
	fclose(fr);
	fclose(fw);

	return 0;
}

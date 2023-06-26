/*
 *使用fgets和fputs实现文件的拷贝
 */
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

void Usage(char *s)
{
	printf("Usage:\n");
	printf("\t%s [src_file] [dst_file]\n",s);
	printf("\tsrc_file:the file will be copied\n");
	printf("\tdst_file:the file will be pasted\n");
}

int main(int argc,char *argv[])
{
	char buf[20];
	FILE *fr,*fw;

	if(argc != 3)
	{
		Usage(argv[0]);
		exit(-1);
	}

	//1、打开两个文件
	fr = fopen(argv[1],"r");
	fw = fopen(argv[2],"w+");

	if(!fr || !fw)
	{
		perror("fopen");
		exit(-1);
	}

	//2、从fr中读出写入到fw
	while(!feof(fr) && !ferror(fr))
	{
		bzero(buf,sizeof(buf));
		fgets(buf,sizeof(buf)-1,fr);
		fputs(buf,fw);
	}
	//3、关闭两个文件
	fclose(fr);
	fclose(fw);

	return 0;
}

/*
 *通过fgetc和fputc实现文件的拷贝操作
 */
#include <stdio.h>
#include <stdlib.h>

void Usage(char *s)
{
	printf("input error....\n");
	printf("Usage:\n");
	printf("\t%s [src_file] [dst_file]\n",s);
	printf("\tsrc_file:the file will be copied\n");
	printf("\tdst_file:the file will be pasted\n");
}

int main(int argc,char *argv[])
{
	int ch;
	FILE *fr;//指向你要读的文件流（源文件）
	FILE *fw;//指向你要写的文件里（目标文件）

	if(argc != 3)
	{
		Usage(argv[0]);
		return -1;
	}

	fr = fopen(argv[1],"r");
	fw = fopen(argv[2],"w+");

	if(fr == NULL || fw == NULL)
	{
	//	perror("fopen failed");
	//	fprintf(stdout,"fopen failed");//相当于printf
		fprintf(stderr,"fopen failed");//无缓存
	}
#if 0
	do{
		ch = fgetc(fr);
		fputc(ch,fw);
		fflush(fw);
	}while(!feof(fr) && !ferror(fr));//写入过程没用出错并且没有到达文件末尾
#endif

	while((ch = fgetc(fr)) != EOF)
	{
		fputc(ch,fw);
	}

	fclose(fr);
	fclose(fw);

	return 0;
}

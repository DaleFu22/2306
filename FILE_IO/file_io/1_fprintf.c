#include <stdio.h>

int main(void)
{
	FILE *fp;

	fprintf(stdout,"hello world\n");

	fp = fopen("test.txt","w+");
	if(!fp)
	{
		perror("fopen");
	}

	fprintf(fp,"蔡徐坤\n");

	fclose(fp);

	return 0;
}

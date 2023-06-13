#include <stdio.h>

int main(void)
{
	int k;
	char c;
	char s[BUFSIZ];
	printf("%d\n",BUFSIZ);
#if 0
	for(k=0;k<17;k++)
		s[k]=getchar();
#endif
#if 0
	while((c=getchar())!='\n')
		s[k++]=c;
#endif
	while((s[k++] = getchar()) != '\n');
	printf("%s\n",s);


	return 0;
}

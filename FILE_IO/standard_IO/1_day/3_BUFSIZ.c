#include <stdio.h>

#undef BUFSIZ
#define BUFSIZ		500

int main(void)
{
	printf("BUFSIZ = %d\n",BUFSIZ);

	return 0;
}

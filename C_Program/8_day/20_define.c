#include <stdio.h>

#define PI	3.14

int main(void)
{
	//我是注释
	float area;
	int r = 2;
	area = PI * r * r;

	printf("面积:%f\n",area);
	printf("%s\n",__FILE__);
	printf("%d\n",__LINE__);
	printf("%s\n",__FUNCTION__);
	printf("%s\n",__DATE__);
	printf("%d\n",__STDC__);

	return 0;
}

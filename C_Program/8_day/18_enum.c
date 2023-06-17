#include <stdio.h>

#if 0
enum color{
		red,
		green,
		blue
};
#endif
#if 0
enum color{
		red = 666,
		green,
		blue
};
#endif
#if 0
enum color{
		red,
		green = 999,
		blue
};
#endif
enum color{
		red = 666,
		green = 888,
		blue = 999,
		white = 4,
};



int main(void)
{
	enum color c1;
	printf("%lu\n",sizeof(c1));
	printf("%lu\n",sizeof(enum color));

	printf("red = %d\n",red);
	printf("green = %d\n",green);
	printf("blue = %d\n",blue);

	return 0;
}

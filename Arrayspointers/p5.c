#include<stdio.h>
main ( )
{
	int a = 5;
	int *b;
	int **c;
	b = &a;
	c = &b;
	printf("value of a = %d\n",a);
	printf(" value of a = %d\n",*(&a));
	printf(" value of a = %d\n",*b);
	printf(" value of a = %d\n",**c);
	printf(" value of b = address of a = %u\n",b);
	printf(" value of c = address of b = %u\n",c);
	printf(" address of a = %u\n",&a);
	printf(" address of a = %u\n",b);
	printf(" address of a = %u\n",*c);
	printf(" address of b = %u\n",&b);
	printf(" address of b = %u\n",c);
	printf(" address c = %u\n",&c);
}
#include<stdio.h>
main ( )
{
	char a = 'p';
	char *a1;
	int b = 5;
	int *b1;
	float c = 5.5;
	float *c1;
	a1 = &a;
	b1 = &b;
	c1 = &c;
	printf("value of a = %c\n",a);
	printf("value of a = %c\n",*(&a));
	printf("value of a = %c\n",*a1);
	printf("value of b = %d\n",b);
	printf("value of b = %d\n",*(&b));
	printf("value of b = %d\n",*b1);
	printf("value of c = %f\n",c);
	printf("value of c = %f\n",*(&c));
	printf("value of c = %f\n",*c1);
	printf("address of a = value of a1= %u\n",a1);
	printf("address of b = value of b1 = %u\n",b1);
	printf(" address of c = value of c1 = %u\n",c1);
}


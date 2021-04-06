#include<stdio.h>
main ( )
{
	int a = 5;
	int *a1;
	char b = 'x';
	char *b1;
	float c = 5.5;
	float *c1;
	a1 = &a;
	b1 = &b;
	c1 = &c;
	printf ( " address of a=value of a1= %u\n",a1);
	printf ( " address of b=value of b1 = %u\n",b1);
	printf ( " address of c =value of c1= %u\n",c1);
	a1++;
	b1++;
	c1++;
	printf ( " Now value of a1=%u\n",a1);
	printf ( " Now value of b1 = %u\n",b1);
	printf ( " Now value of c1 = %u\n",c1);
}

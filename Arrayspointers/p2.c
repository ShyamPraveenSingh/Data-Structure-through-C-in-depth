#include<stdio.h>
main ( )
{

	int a = 5;
	printf("value of a = %d\n",a);
	printf("address of a = %u\n",&a);
	printf("value at address %u = %d\n",&a,*(&a));
}

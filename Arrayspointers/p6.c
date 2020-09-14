/* program to understand the postfix, prefix, increment, decrement in the pointer variable */
#include<stdio.h>
main ( )
{
	int a = 5;
	int *b;
	b = &a;
	printf(" address of a = %u\n",b);
	printf(" value of b = %u\n",++b);
	printf(" value of b = %u\n",b++);
	printf(" value of b = %u\n",--b);
	printf(" value of b = %u\n",b--);
	printf(" value of b = %u\n",b);
}

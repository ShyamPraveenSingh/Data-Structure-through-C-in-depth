#include<stdio.h>
main ( )
{
	int a = 5;
	int *b;
	int *fun( );
	b = &a;
	printf ( " Before calling the function address of a = %u\n",b);
	b = fun( &b);
	printf ( " After calling the function value of b = %u\n",b);
	}
int *fun(int **x )
{
	*x = *x + 1;
	return ( *x );
}

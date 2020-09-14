/* program to enter the 5 numbers and print them using malloc( )*/
#include<stdio.h>
main ( )
{
	int i;
	int *a;
	a = ( int * ) malloc ( 5 * sizeof ( int ) );
	for ( i=0;i<5;i++)
	{
		printf ( " number %d=", i+1);
		scanf ( "%d",( a+i) );
	}
	for ( i =0;i<5;i++)
	printf ( " %d\n",*(a+i) );
}

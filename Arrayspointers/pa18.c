/* program to accept 10 numbers and sort them with use of pointer */
#include<stdio.h>
main ( )
{
	int i,j;
	int arr[10];
	int *a;
	a=arr;
	for ( i=0;i<10;i++)
	{
		printf ( "Enter the number %d : ",i+1);
		scanf ( "%d",&arr[i]);
	}
	printf ( "Before sorting:\n" );
	for ( i=0; i<10 ; i++)
		printf ( " %d    " , arr[i] );
	printf ( "\n" );
	a=arr;

	for ( i=0;i<10;i++)
	   for ( j=0;j<10-i-1;j++)
		if ( *(arr+j) > *(arr+j+1))
			swap(arr+j , arr+j+1);

	printf ( " After sorting :\n" );

	for ( i =0 ; i < 10 ; i++)
		printf ( "%d  ",arr[i] );
	printf ( "\n" );
}
swap ( int *b , int *c )
{
	int temp;
	temp = *b;
	*b = *c;
	*c = temp;
}

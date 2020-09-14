/* program to print the value of the array element */
#include<stdio.h>
main ( )
{
	int arr[4] = { 5 , 10 , 15 , 20 };
	int i = 0;

	for ( i=0;i<4;i++)
	{
		printf ( " value of  arr[%d]=",i);
		printf ( "%d-----",arr[i] );
		printf ( " %d-----",*(arr+i));
		printf ( "%d-----",*(i+arr));
		printf ( "%d\n",i[arr] );
		printf ( " address of arr[%d]=%u\n",i,&arr[ i] );
	}
}

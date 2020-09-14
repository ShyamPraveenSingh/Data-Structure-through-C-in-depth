/*Program to print the elements of the array*/
#include<stdio.h>
main ( )
{
	int arr[3][2] = {
			{ 10 , 100 },
			{ 20 , 200 },
			{ 30 , 300 }
			  };
	int i , j;
	for ( i = 0 ; i < 3 ; i++)
	{
		printf ( " \n" );
		for ( j=0;j< 2;j++)
			printf ( "value = %d\t", *(*(arr+i)+j));
	}
}

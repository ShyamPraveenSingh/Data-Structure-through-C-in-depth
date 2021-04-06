/* program to print the values and address of the array element*/
#include<stdio.h>
main ( )
{
	int arr[3][2]= {
			{10,100},
			{20,200},
			{30,300}
			};
	int i, j;

	for ( i = 0; i < 3; i++)
	{
		printf ( "address of %d array = %u\n",i,&arr[i]);
		for ( j=0 ; j < 2 ; j++);
			printf ( "value = %d\n",arr[i][j] );
	}
}

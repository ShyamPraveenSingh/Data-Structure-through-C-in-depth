/* program for understanding the concept of array of pointers */
#include<stdio.h>
main ( )
{
	int *arr[3];
	int a = 5, b = 10, c = 15,i;
	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;
	for ( i=0;i< 3;i++)
	{
		printf ( "address = %u\t", arr[i] );
		printf ( " value = %d \n",*(arr[i]) );
	}
}

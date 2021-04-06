/*program to print the value and address of the element */
#include<stdio.h>
main ( )
{
	int arr[4] = { 5 , 10 , 15 , 20 };
	int i = 0;
	for ( i=0;i<4;i++)
	{
		printf ( "value of arr[%d] = %d\n",i,arr[i]);
		printf ( " address of arr[%d] = %u\n",i,&arr[i] );
	}
}

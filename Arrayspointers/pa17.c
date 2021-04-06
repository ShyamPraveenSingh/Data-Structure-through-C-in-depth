/* program to accept 10 numbers and print the total with use of pointer */
#include<stdio.h>
main ( )
{
	int i,total;
	int arr[10];
	int *a;
	a = arr;
	for ( i=0;i<10;i++)
	{
		printf ( " Enter the number %d : ",i+1);
		scanf ( "%d",&arr[i]);
	}
	for ( i=0;i < 10 ; i++)
	{
		printf ( "%d---",*a);
		total = total + *a;
		a=a+1;
	}
	printf ( "\n Total = %d\n",total);
}

/* program for understanding this concept */
#include<stdio.h>
main ( )
{
	static int arr[4] = { 5 , 10 , 15 , 20 };
	static int *a[4] = { arr , arr+1 , arr+2 , arr+3};
	int i;
	int **b;
	b=a;
	for ( i = 0;i< 4 ; i++)
	{
		printf ( " address = %u",*b);
		printf ( " value = %d \n",**b);
		b = b + 1;
	}
}

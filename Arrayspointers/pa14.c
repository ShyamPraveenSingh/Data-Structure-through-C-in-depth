/*Use pointer to print the value and address of array elements*/
#include<stdio.h>
main ( )
{
	int arr[4] = { 5 , 10 , 15 , 20 };
	int i = 0;
	int *b;
	b = arr;	/*we can also write b = &arr[0] */
	for ( i = 0;i<=4;i++)
	{
		printf ( "value of arr[%d]=%d\n",i,*b);
		printf ( "address of arr[%d]=%u\n",i,b);
		b=b+1;
	}
}

/*Use the pointer with function to print the value and address of the array element*/
#include< stdio.h>
main ( )
{
	int arr[4]={ 5 , 10 , 15 , 20 };
	fun ( arr);
}

fun ( int *a)
{
	int i ;
	for ( i = 0; i <=4;i++)
	{
		printf ( " value of arr[%d]=%d\n",i,*a);
		printf ( "address of arr[%d]=%u\n",i,a);
		a=a+1;
	}
}

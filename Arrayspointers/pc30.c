/*program to print the strings of the two-dimensional character array*/
#include<stdio.h>
main ( )
{
char arr[5][10] = {
		"riti",
		"niti",
		"kriti",
		"kittu",
		"nitin"
		};
	int i;
	for ( i=0;i<5;i++)
	{
		printf ( " base address = %u",&arr[ i] );
		printf ( " string = %s\n",arr[ i] );
	}
}

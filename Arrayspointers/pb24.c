/*program to print the character of any string and also address of each character. */
#include<stdio.h>
main( )
{
	char arr[ ] = "reeta";
	int i;
	for ( i=0;arr[i]!='\0';i++)
	{
		printf ( " address = %u\t",&arr[i] );
		printf ( "character = %c\n",arr[i] );
	}
}

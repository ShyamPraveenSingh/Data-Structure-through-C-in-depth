/*program to print the address and character of the string with using pointer*/
#include<stdio.h>
main ( )
{
	char arr[ ]= "reena";
	char *a;
	a = arr;
	while ( *a !='\0' )
	{
		printf ( "address= %u\t",a);
		printf ( "character = %c\n",*a);
		a = a+1;
	}
}

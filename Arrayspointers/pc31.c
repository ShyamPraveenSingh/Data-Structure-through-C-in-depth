/* program to print the address and string using array of pointer to string*/
#include<stdio.h>
main ( )
{
	int i;
	char *arr[ ] = {
			"riti",
			"niti",
			"kriti",
			"kittu",
			"nitin"
			};

	for ( i=0;i<5;i++)
	{
		printf ( "address=%u\t",(arr + i) );
		printf ( "string = %s\n", *(arr + i) );
	}
}

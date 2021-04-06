/*program to understand the use of realloc function */
#include<stdio.h>
#include<alloc.h>
#include<string.h>
main ( )
{
	char *ptr;
	ptr = ( char * ) malloc ( 6 );
	ptr = "ankit";
	printf ("%s is in memory block\n",ptr );
	ptr = ( char * ) realloc ( ptr,8);
	printf ("%s is in memory block\n",ptr );
	strcpy ( ptr , "rishabh" );
	printf ("Now %s is in memory block\n",ptr );
}

/* program to pass the address of the structure variable */
#include<stdio.h>
struct rec{
	  char name[10];
	  int age;
	  int sal;
	};
main ( )
{
	static struct rec data = { "sachin" , 26 , 25000 };
	function ( &data );
}
function ( ptr )
struct rec *ptr;
{
	printf ( "Name:%s\n" ,ptr->name );
	printf ( "Age:%d\n" , ptr->age );
	printf ( "Salary:%d\n" , ptr->sal );
}

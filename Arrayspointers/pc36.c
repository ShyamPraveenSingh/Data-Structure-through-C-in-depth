/*Program to understand pointer to structure*/
#include<stdio.h>
main ( )
{
	struct rec{
		  char name[10];
		  int age;
		  int sal;
		}*ptr;
	printf ( " Enter the name:" );
	scanf ( "%s" , ptr�name );
	printf ( " Enter the age:");
	scanf ( "%d" , &ptr�age );
	printf ( " Enter the salary:" );
	scanf ( "%d" , &ptr�sal );
	printf ( "Name:%s\n" , ptr�name);
	printf ( " Age:%d\n" , ptr�age );
	printf ( " Salary:%d ", ptr�sal );
}

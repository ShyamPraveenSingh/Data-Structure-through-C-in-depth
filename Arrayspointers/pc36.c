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
	scanf ( "%s" , ptràname );
	printf ( " Enter the age:");
	scanf ( "%d" , &ptràage );
	printf ( " Enter the salary:" );
	scanf ( "%d" , &ptràsal );
	printf ( "Name:%s\n" , ptràname);
	printf ( " Age:%d\n" , ptràage );
	printf ( " Salary:%d ", ptràsal );
}

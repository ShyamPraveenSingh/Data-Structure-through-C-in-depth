/*Program to assign the value to member of structure with the use of structure pointer */
#include<stdio.h>
#include<stdio.h>
main ( )
{
	struct rec{
		 char name[10];
		  int age;
		  int sal;
		}*ptr;
	strcpy(ptr->name, "suresh");
	ptr->age= 24;
	ptr->sal = 5000;
	printf ( "Name:%s\n" , ptr->name );
	printf ( "Age:%d\n" , ptr->age );
	printf ( "Salary:%d ", ptr->sal );
}

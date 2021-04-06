/* program to use a pointer as a member of structure and print the value of members*/
#include<stdio.h>
main( )
{
	struct rec{
		  char *name;
		  int *age;
		  int *sal;
	}data,*ptr;
	char name1[10]= "R.O. Verma";
	int age1=50;
	int sal1=17000;
	ptr->name=&name1;
	ptr->age=&age1;
	ptr->sal=&sal1;
	printf ( "Name:%s\n" , ptr->name );
	printf ( "Age:%d\n" , *ptr->age );
	printf ( "Salary:%d\n" , *ptr->sal );
}

/*Same program without use of arrow operator */
#include<stdio.h>

main ( )
{
	struct rec{
		  char *name;
		  int *age;
		  int *sal;
	}data;
	char name1[20] = "B.N.S. Srivastava";
	int age1=23;
	int sal1=17000;
	strcpy(data.name , "B.N.S.Srivastava");
	data.age=&age1;
	data.sal=&sal1;
	printf ( "Name:%s\n" , data.name );
	printf ( "Age:%d\n" , *data.age );
	printf ( "Salary:%d\n" , *data.sal );
}

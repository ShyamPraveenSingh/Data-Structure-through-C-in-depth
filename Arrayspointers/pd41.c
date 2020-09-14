/*Program to accept name , class  and marks with the use of structure with pointer. Also print the grade which is based on the marks-
1. marks > = 75	grade-A
2. marks >=50 and < 75	grade-B
3. marks < 50	grade-C
*/
#include<stdio.h>

main ( )
{
struct {
	 	char name[20];
	 	int class;
		int marks;
            	 }*ptr;
	printf ( "Name:" );
	scanf ( " %s", ptr->name );
	printf ( "Class:" );
	scanf ( " %d",&ptr->class );
	printf ( " Marks:" );
	scanf ( " %d", &ptr->marks );
	printf ( "Name\tClass\tMarks\tGrade\n" );
	printf ( " %s\t" , ptr->name );
	printf (" %d\t" , ptr->class );
	printf ( " %d\t" , ptr->marks );
	if ( ptr->marks  < 50 )
		printf ( " F\n" );
	else
	if ( ptr->marks >=50 && ptr->marks < 75 )
		printf ( " B\n" );
	else
		printf ( " A\n" );
}

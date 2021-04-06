/*Program to accept name , class  and marks of 10 students with the use of structure with array of pointer and also print them.*/
#include<stdio.h>
main ( )
{
	struct {
		char name[20];
		 int class;
		int marks;
		 }*rec[10];
	int i;
	for ( i=0;i< 10;i++ )
	{
		printf ( "Name:" );
		scanf ( " %s", rec[i]->name );
		printf ( "Class:" );
		scanf ( " %d", &rec[i]->class );
		printf ( " Marks:" );
		scanf ( " %d", &rec[i]->marks );
	}
	printf ( "Name\tClass\tMarks\n" );
	for ( i=0 ; i<10 ;i++ )
	{
		printf ( " %s\t" , rec[i]->name );
		printf (" %d\t" , rec[i]->class );
		printf ( " %d\n" , rec[i]->marks );
	}
}

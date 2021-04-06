/*program to understand the sizeof operator */
#include<stdio.h>
main ( )
{
	struct
	{
	    char name[10];
	    int age;
	    float sal;
	}rec;
	int arr[10];
	printf ( " size of structure = %d",sizeof ( rec ) );
	printf ( " size of int = %d",sizeof ( int ) );
	printf ( " size of array = %d",sizeof ( arr ) );
}

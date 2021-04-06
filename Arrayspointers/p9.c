/* program to explain call by reference */
#include<stdio.h>
main ( )
{
	int a = 5;
	int b = 8;
	printf (" Before calling the function a and b are %d , %d\n",a,b);
	ref ( &a , &b);
	printf ( " After calling the function a and b are %d , %d\n",a,b);
}

ref ( p , q )
int *p,*q;
{
	(*p)++;
	(*q)++;
	printf ( " In function changes are %d , %d\n" , *p,*q);
}


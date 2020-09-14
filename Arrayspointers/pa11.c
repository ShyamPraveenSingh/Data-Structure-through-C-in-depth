/* program to interchange the value of variables from call by reference */
#include<stdio.h>
main ( )
{
	int a = 5;
	int b = 8;
	printf ( " Before swapping  a = %d , b = %d\n",a,b);
	swap ( &a,&b);
	printf ( "After calling swap function  a = %d , b = %d\n",a,b);
}
swap ( p , q)
int *p,*q;
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	printf ( " In swapping function  p = %d , q = %d\n",*p,*q);
}

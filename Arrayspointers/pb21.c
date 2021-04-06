/*program to print the elements of 3-D array  */
#include<stdio.h>
main ( )
{
int arr[2][3][2] = {
			{
				{ 5 , 10 },
				{ 6 , 11 },
				{ 7 , 12 },
			},
			{
				{ 20 , 30 },
				{ 21 , 31 },
				{ 22 , 32 },
			 }
		    };
	int i,j,k;
	for ( i=0;i< 2;i++)
	for ( j=0;j < 3 ; j++)
	{
		printf ( " \n");
		for ( k =0;k<2;k++)
			printf ( " %d\t",*(*(*(arr+i)+j)+k));
	}
}

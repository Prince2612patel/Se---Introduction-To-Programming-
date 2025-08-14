// 8. Array in c

// Write a C program that stores 5 integers in a one-dimensional array and prints them. 
//Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.

#include<stdio.h>
int main()
{
	int n;
	int j;
	int i;
	int arr[3][3];
	int sum =0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the Array of index [%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
			sum = sum + arr[i][j];
		}
	}
	
	printf("\n \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",arr[i][j]);
			
		}
		printf("\n \n");
	}

	printf("Sum = %d",sum);

}

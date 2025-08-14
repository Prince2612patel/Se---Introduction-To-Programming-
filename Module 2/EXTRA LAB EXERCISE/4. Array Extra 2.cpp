// 4. Array 
//LAB EXERCISE 2: Matrix Addition 
//• Write a C program that accepts two 2x2 matrices from the user and adds them. Display the 
//resultant matrix. 
//• Challenge: Extend the program to work with 3x3 matrices and matrix multiplication. 



//#include<stdio.h>
//int main()
//{
//	int arr1[2][2];
//	int arr2[2][2];
//	int result[2][2];
//	int i , j;
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			printf("Enter the Array 1 Elemnet [%d][%d]",i,j);
//			scanf("%d",&arr1[i][j]);
//		}
//	}
//
//
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			printf("Enter the Array 2 Elemnet [%d][%d]",i,j);
//			scanf("%d",&arr2[i][j]);
//		}
//	}
//
//	
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			result[i][j] = arr1[i][j] + arr2[i][j];
//		}
//	}
//	
//	
//	printf("\n");
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			printf("%d  ",result[i][j]);
//		}
//		printf("\n");
//	}
//
//}


//• Challenge: Extend the program to work with 3x3 matrices and matrix multiplication. 



#include<stdio.h>
int main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	
	int i , j , k;
	
	// Arr1 User Input
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the Array a[%d][%d] : \n ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	// Display arr1
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	
	// arr2 User Input
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the Array b[%d][%d] : \n",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	// Display arr2
	printf("\n \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n \n");
	// Addition 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j] = a[i][j] + b[i][j] ; 
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	// Multiplication
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			 c[i][j] = 0;
			 for(k=0;k<3;k++)
			 {
			 	c[i][j] = c[i][j] + a[i][k] * b[k][j];
			 }
		}
	}


	printf("Result of Multiplication: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}


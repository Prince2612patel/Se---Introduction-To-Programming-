// Loops
// Extra 2 
// LAB EXERCISE 2: Multiplication Table 

// Write a C program that takes an integer input from the user and prints its multiplication 
//table using a for loop. 
// Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).

//#include<stdio.h>
//int main()
//{
//	int num;
//	int i;
//	printf("Enter the number ");
//	scanf("%d",&num);
//	
//	for(i=1;i<=10;i++)
//	{
//		printf("%d * %d = %d\n", num ,i , i * num );
//	}
//}
//
//
//// Challange 


#include<stdio.h>
int main()
{
	int start;
	int num;
	int end;
	int i;
	
	printf("Enter the number ");
	scanf("%d",&num);
	
	printf("Enter the starting number ");
	scanf("%d",&start);
	
	
	printf("Enter the Ending Number ");
	scanf("%d",&end);
	
	
	if(start>end)
	{
		printf("Pleaase enter a valid number ");
	}
	
	
	printf("Multiplicatiom table of %d  from %d to %d \n ",num, start,end);
	
	for(int i = start ; i<= end; i++ )
	{
		printf("%d x %d = %d \n ", num,i, num * i );
	}
	
	
	return 0;
	
}

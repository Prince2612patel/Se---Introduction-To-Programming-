// Write a C program that uses the break statement to stop printing numbers 
//when it reaches 5. Modify the program to skip printing the number 3 using the 
//continue statement. 


// break Statement
#include<stdio.h>
int main()
{
	int n;
	int i;
	printf("Enter the number ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i==6)
		{
			break;
		}
	printf("%d\n",i);
	}
}

// OutPut : Stops the number 6      // 1 2 3 4 5 

// continue statement .. 
//#include<stdio.h>
//int main()
//{
//	int num;
//	int i;
//	printf("Enter the number ");
//	scanf("%d",&num);
//	
//	for(i=0;i<=num;i++)
//	{
//		if(i==10)
//		{
//			continue;
//		}
//	printf("%d \n",i);
//	}
//}

// Output Skip the 10 number // Lets Say Input = 12 print = 1 2 3 4 5 6 7 8 9 11 12 (Skip the print)


// Using goto statement 

//#include<stdio.h>
//int main()
//{
//	int i;
//	
//	i = 1;
//	
//	start:
//		if(i<=10)
//		{
//			printf("%d\n",i);
//			i++;
//			goto start;			
//		}
//}




//goto statement input from the user side

//#include<stdio.h>
//int main()
//{
//	int n;
//	int i;
//	printf("Entrr the number:");
//	scanf("%d",&n);
//	
//	i = 1;
//	demo_goto:
//		if(i<=n)
//		{
//			printf("%d \n",i);
//			i++;
//			goto demo_goto;
//		}
//	
//}

//// Write a C program that calculates the factorial of a number using a function. 
////Include function declaration, definition, and call.
//
#include<stdio.h>
int fact(int n);
int main()
{
	int n;
	
	printf("Enter the number ");
	scanf("%d",&n);
	
	printf("%d",fact(n));
	return 0;	
}

int fact(int n)
{
	if (n == 0)
		return 1;
	else
	{
	
	int minus_num = fact(n-1);
	int real_num = n + minus_num;
	return real_num;
	}
}



// Write a C program that calculates the factorial of a number using a function. 
//Include function declaration, definition, and call.

//#include<stdio.h>
//int fact(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//	{
//
//	int minus_num = fact(n-1);
//	int real_num = n * minus_num;
//	return real_num;
//    }
//}
//int main()
//{
//	int n;
//	
//	printf("Enter the number ");
//	scanf("%d",&n);
//	
//	printf("%d",fact(n));
//	return 0;	
//}




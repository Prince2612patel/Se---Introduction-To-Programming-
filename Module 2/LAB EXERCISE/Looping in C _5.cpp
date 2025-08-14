// Write a C program to print numbers from 1 to 10 using all three types of loops 
//(for,  while loop,  do-while). 


// 1. For Loop 
#include <stdio.h>
int main()
{
	int n;
	
	printf("Enter the Number ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		printf("Using For Loop Print 1 to %d numbers = %d\n",n,i);
	}
}

// 2. While Loop
//#include <stdio.h>
//int main()
//{
//	int n;
//	int i;
//	
//	printf("Enter the Number");
//	scanf("%d",&n);
//	i = 1;
//	while(i<=n)
//	{
//		printf("Using While Loop Print The 1 to %d = %d \n" ,i, n);
//		i++;
//	}
//	
//	
//}


// 3. do-while
//#include<stdio.h>
//int main()
//{
//	int num;
//	
//	num = 1;
//	do
//	{
//		printf("%d \n",num);
//		num++;
//	}
//
//	while(num<=10);
//	printf("\n");
//}





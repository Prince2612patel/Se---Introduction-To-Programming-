// Loops
// Extra 3 
//	LAB EXERCISE 3: Sum of Digits 
// Write a C program that takes an integer from the user and calculates the sum of its digits 
//using a while loop. 
// Challenge: Extend the program to reverse the digits of the number. 

#include<stdio.h>
int main()
{
	int num;
	int i;
	
	printf("Enter the Number");
	scanf("%d",&num);
	
	i = 1;
	while(i<= num)
	{
		i++;
		printf("%d");
	}
}

// Extra Exercise 2

//   LAB EXERCISE 2: Check Number Properties 
 
// Write a C program that takes an integer from the user and checks the following using 
// different operators: 
// Whether the number is even or odd. 
// Whether the number is positive, negative, or zero. 
// Whether the number is a multiple of both 3 and 5. 


#include <stdio.h>

int main() {
    int num;


    printf("Enter an integer: ");
    scanf("%d", &num);

   // Even Or Odd Number Check

    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    // Positive Negative Number Check

    if (num > 0) 
	{
        printf("The number is positive.\n");
    } 
	
	else if (num < 0) 
	{
        printf("The number is negative.\n");
    } 
	
	else 
	{
        printf("The number is zero.\n");
    }

	// Number is multiple by 3 and 5 Yes or No. 

    if ((num % 3 == 0) && (num % 5 == 0)) 
	{
        printf("The number is a multiple of both 3 and 5.\n");
    } 
	else 
	{
        printf("The number is NOT a multiple of both 3 and 5.\n");
    }

    return 0;
}


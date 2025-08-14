// Loops 
// LAB EXERCISE 1: Prime Number Check
//  Write a C program that checks whether a given number is a prime number or not using a for loop
// Challenge: Modify the program to print all prime numbers between 1 and a given number.

#include<stdio.h>

int main() {
    int num, i, j, isPrime;

    printf("Enter the number: ");
    scanf("%d", &num);

    // Print all prime numbers from 2 to num
    printf("Prime numbers between 1 and %d are:\n", num);

    for(i = 2; i <= num; i++) 
	{
        isPrime = 1; // Assume the number is prime

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) 
			{
                isPrime = 0; // Not a prime
                break;
            }
        }

        if(isPrime == 1) 
		{
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}


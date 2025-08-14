// Extra Logic Building Challenges
// Lab Challenge 1: Armstrong Number 
//• Write a C program that checks whether a given number is an Armstrong number or not (e.g., 
//153 = 1^3 + 5^3 + 3^3). 
//• Challenge: Write a program to find all Armstrong numbers between 1 and 1000. 

#include <stdio.h>
#include <math.h>

/// Step 1: Function Declaration
int isArmstrong(int num);

/// Step 2: Main Function
int main() 
{
    int number;

    // Step 3: Logic - Input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Step 3: Logic - Processing and Output
    if (isArmstrong(number)) 
	{
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

/// Step 3: Logic - Define the function
int isArmstrong(int num) 
{
    int original = num, rem, result = 0;
    int digits = 0, temp = num;

    // Count digits
    while (temp != 0) 
	{
        digits++;
        temp /= 10;
    }

    temp = num;
    // Calculate sum of each digit raised to the power of total digits
    while (temp != 0) 
	{
        rem = temp % 10;
        result += pow(rem, digits);
        temp /= 10;
    }

    // Check Armstrong condition
    return result == original;
}


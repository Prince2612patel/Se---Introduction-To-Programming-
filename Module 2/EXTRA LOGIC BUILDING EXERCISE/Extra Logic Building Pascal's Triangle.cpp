// Lab Challenge 2: Pascal’s Triangle 
//Lab Challenge 2: Pascal’s Triangle 
//• Write a C program that generates Pascal’s Triangle up to N rows using loops. 
//• Challenge: Implement the same program using a recursive function.

#include <stdio.h>

// Recursive factorial function declaration
int factorialRecursive(int n);

// Recursive combination function declaration
int combinationRecursive(int n, int r);

// Function to print Pascal's Triangle using loops and recursion
void printPascalsTriangle(int rows);

int main() 
{
    int n;

    printf("Enter number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    printf("\nPascal's Triangle (using loops + recursion):\n");
    printPascalsTriangle(n);

    return 0;
}

// Recursive factorial function definition
int factorialRecursive(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

// Recursive combination function definition
int combinationRecursive(int n, int r) 
{
    return factorialRecursive(n) / (factorialRecursive(r) * factorialRecursive(n - r));
}

// Function to print Pascal's Triangle using loops + recursion
void printPascalsTriangle(int rows) 
{
    for (int i = 0; i < rows; i++) 
	{
        // Print leading spaces for formatting
        for (int space = 0; space < rows - i - 1; space++) 
		{
            printf("  ");
        }

        // Print each value using recursion to calculate nCr
        for (int j = 0; j <= i; j++) 
		{
            printf("%4d", combinationRecursive(i, j));     
        }

        printf("\n");
    }
}


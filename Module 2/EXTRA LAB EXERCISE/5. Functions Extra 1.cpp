// 5. Functions 
//LAB EXERCISE 1: Fibonacci Sequence 
//• Write a C program that generates the Fibonacci sequence up to N terms using a recursive 
//function. 
//• Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative 
//and recursive methods. Compare their efficiency. 

#include <stdio.h>

// Function declarations
int fibonacciRecursive(int n);
int fibonacciIterative(int n);
void printFibonacciSequence(int n);

int main() {
    int n;

    // Input from user
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Print Fibonacci sequence
    printf("\nFibonacci sequence using recursion:\n");
    printFibonacciSequence(n);

    // Print the Nth Fibonacci number
    printf("\n\n%dth Fibonacci (Recursive): %d", n, fibonacciRecursive(n));
    printf("\n%dth Fibonacci (Iterative): %d\n", n, fibonacciIterative(n));

    return 0;
}

// Function definitions

// Recursive function to get Nth Fibonacci number
int fibonacciRecursive(int n) {
    if (n <= 1)
        return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// Iterative function to get Nth Fibonacci number
int fibonacciIterative(int n) {
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// Function to print Fibonacci sequence using recursion
void printFibonacciSequence(int n) 
{
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", fibonacciRecursive(i));
    }
}


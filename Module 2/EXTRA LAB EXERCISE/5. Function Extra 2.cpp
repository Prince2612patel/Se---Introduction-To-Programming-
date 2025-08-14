// 5. Function Extra 2
// • Write a C program that calculates the factorial of a given number using a function. 
//• Challenge: Implement both an iterative and a recursive version of the factorial function and 
//compare their performance for large numbers.



#include <stdio.h> 

 

// Recursive factorial function 

long long factorialRecursive(int n)  

{ 

    if (n == 0 || n == 1) 

        return 1; 

    else 

        return n * factorialRecursive(n - 1); 

} 

 

// Iterative factorial function 

long long factorialIterative(int n)  

{ 

    long long result = 1; 

    for (int i = 2; i <= n; i++)  

	{ 

        result = result * i; 
    } 

    return result; 

} 

 

int main() { 

    int num; 

 

    printf("Enter a number: "); 

    scanf("%d", &num); 

 

    if (num < 0)  

{ 

        printf("Factorial is not defined for negative numbers.\n"); 

        return 1; 

    } 



    printf("Factorial (Recursive) of %d = %d\n", num, factorialRecursive(num)); 

    printf("Factorial (Iterative) of %d = %d\n", num, factorialIterative(num)); 

 

    return 0; 

} 

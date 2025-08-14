// 2. Control Statements
// LAB EXERCISE 2: Number Comparison 
//Write a C program that takes three numbers from the user and determines: 
// The largest number. 
// The smallest number. 
// Challenge: Solve the problem using both if-else and switch-case statements.


#include <stdio.h>

int main() 
{
    int a, b, c;
    int largest, smallest;
    int selector;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

 
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    printf("\n[Using If-Else]\n");
    printf("Largest Number = %d\n", largest);
    printf("Smallest Number = %d\n", smallest);

  
    
    // Find largest using selector
    if (a >= b && a >= c)
        selector = 1;
    else if (b >= a && b >= c)
        selector = 2;
    else
        selector = 3;

    switch (selector) {
        case 1:
            largest = a;
            break;
        case 2:
            largest = b;
            break;
        case 3:
            largest = c;
            break;
    }

    // Find smallest using selector
    if (a <= b && a <= c)
        selector = 1;
    else if (b <= a && b <= c)
        selector = 2;
    else
        selector = 3;

    switch (selector) 
	{
        case 1:
            smallest = a;
            break;
        case 2:
            smallest = b;
            break;
        case 3:
            smallest = c;
            break;
    }

    printf("\n[Using Switch-Case]\n");
    printf("Largest Number = %d\n", largest);
    printf("Smallest Number = %d\n", smallest);

    return 0;
}


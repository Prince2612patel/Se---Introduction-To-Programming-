// 4. Array 
// LAB EXERCISE 3: Sum of Array Elements
// Write a C program that takes N numbers from the user and stores them in an array. 
// The program should then calculate and display the sum of all array elements. 
// Challenge: Modify the program to also find the average of the numbers.


#include <stdio.h>

int main() {
    int N, i;
    float sum = 0, average;

    // Ask user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Declare array with size N
    float numbers[N];

    // Input elements
    printf("Enter %d numbers:\n", N);
    for (i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &numbers[i]);
        sum = sum + numbers[i];
    }

    // Calculate average
    average = sum / N;

    // Display results
    printf("\nSum of the elements = %.2f\n", sum);
    printf("Average of the elements = %.2f\n", average);

    return 0;
}


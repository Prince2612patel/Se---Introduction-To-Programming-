// 2. Control Statements 

// LAB EXERCISE 1: Grade Calculator 
// Write a C program that takes the marks of a student as input and displays the corresponding 
// grade based on the following conditions: 
// Marks > 90: Grade A 
// Marks > 75 and <= 90: Grade B 
// Marks > 50 and <= 75: Grade C 
// Marks <= 50: Grade D 
//Use if-else or switch statements for the decision-making process.

#include <stdio.h>

int main() 
{
    int marks;

    // Ask the user to enter the marks
    printf("Enter the student's marks (0-100): ");
    scanf("%d", &marks);

    // Validate marks
    if (marks < 0 || marks > 100) 
	{
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
    } 
	else 
	{
        // Check grade using if-else
        if (marks > 90) 
		{
            printf("Grade: A\n");
        } 
		else if (marks > 75) 
		{
            printf("Grade: B\n");
        } 
		else if (marks > 50) 
		{
            printf("Grade: C\n");
        } 
		else 
		{
            printf("Grade: D\n");
        }
    }

    return 0;
}


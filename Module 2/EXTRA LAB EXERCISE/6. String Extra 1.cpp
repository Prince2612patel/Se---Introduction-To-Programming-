// 6. String 
// LAB EXERCISE 1: String Reversal 
// Write a C program that takes a string as input and reverses it using a function. 
// Challenge: Write the program without using built-in string handling functions.


#include <stdio.h>

// 1. Function Declaration
void reverseString(char str[]);

int main() 
{
    // 2. Main Function
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);  // Input string including spaces

    // Call the function to reverse the string
    reverseString(str);

    return 0;
}

// 3. Logic Building - Function Definition
void reverseString(char str[]) 
{
    int start = 0, end = 0, temp;

    // Manually calculate the length of the string
    while (str[end] != '\0') 
	{
        end++;
    }
    end--;  // Move to the last character (excluding null terminator)

    // Swap characters from start and end
    while (start < end) 
	{
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);
}


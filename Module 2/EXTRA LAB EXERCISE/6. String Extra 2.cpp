// 6. String  
//LAB EXERCISE 2: Count Vowels and Consonants 
//• Write a C program that takes a string from the user and counts the number of vowels and 
//consonants in the string. 
//• Challenge: Extend the program to also count digits and special characters.   

#include <stdio.h>

int main() {
    char str[1000];
    int i;
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    // Ask the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    // Loop through each character in the string
    for (i = 0; str[i] != '\0'; i++) 
	{
        char ch = str[i];

        // Check for vowels (both lowercase and uppercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
		{
            vowels++;
        }
        // Check for consonants (letters that are not vowels)
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
		{
            consonants++;
        }
        // Check for digits
        else if (ch >= '0' && ch <= '9') 
		{
            digits++;
        }
        // Check for special characters (not letter or digit or newline)
        else if (ch != '\n') 
		{
            special++;
        }
    }

    // Print the results
    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special);

    return 0;
}


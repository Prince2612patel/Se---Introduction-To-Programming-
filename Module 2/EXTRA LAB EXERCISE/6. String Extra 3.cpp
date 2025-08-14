//6. String 
// LAB EXERCISE 3: Word Count 
//• Write a C program that counts the number of words in a sentence entered by the user. 
//• Challenge: Modify the program to find the longest word in the sentence. 

#include <stdio.h>
#include <string.h>

int main() 
{
    char sentence[1000];
    int i = 0, wordCount = 0, maxLen = 0, currLen = 0;
    char longestWord[100];

    // Temporary word holder
    char currentWord[100];
    int currIndex = 0;

    // Ask the user to enter a sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') 
	{
        char ch = sentence[i];

        if (ch != ' ' && ch != '\n') 
		{
            currentWord[currIndex++] = ch; // Build current word
            currLen++;
        } 
		else 
		{
            if (currLen > 0) 
			{
                currentWord[currIndex] = '\0'; // End the current word
                wordCount++;

                // Check if this is the longest word
                if (currLen > maxLen) 
				{
                    maxLen = currLen;
                    strcpy(longestWord, currentWord);
                }

                // Reset current word
                currLen = 0;
                currIndex = 0;
            }
        }

        i++;
    }

    // In case last word was not followed by space or newline
    if (currLen > 0) 
	{
        currentWord[currIndex] = '\0';
        wordCount++;

        if (currLen > maxLen) 
		{
            strcpy(longestWord, currentWord);
        }
    }

    // Display results
    printf("\nTotal number of words: %d\n", wordCount);
    printf("Longest word: %s\n", longestWord);

    return 0;
}


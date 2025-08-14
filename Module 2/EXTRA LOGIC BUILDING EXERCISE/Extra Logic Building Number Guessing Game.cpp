// Extra Logic Building Number Guessing Game 
// Lab Challenge 3: Number Guessing Game 
//• Write a C program that implements a simple number guessing game. The program should 
//generate a random number between 1 and 100, and the user should guess the number 
//within a limited number of attempts. 
//• Challenge: Provide hints to the user if the guessed number is too high or too low.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int secretNumber, guess, attempts = 0;
    int maxAttempts = 7; // limit attempts to 7

    // Initialize random number generator
    srand(time(NULL));
    secretNumber = (rand() % 100) + 1; // random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n", maxAttempts);

    while (attempts < maxAttempts) 
	{
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == secretNumber) 
		{
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        } else if (guess < secretNumber) 
		{
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    if (attempts == maxAttempts && guess != secretNumber) 
	{
        printf("Sorry! You've used all your attempts. The number was %d.\n", secretNumber);
    }

    return 0;
}


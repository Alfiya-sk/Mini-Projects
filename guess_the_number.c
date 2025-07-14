#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    char playAgain;

    srand(time(0));  // Seed random number generator

    do {
        number = rand() % 100 + 1;  // Random number between 1 and 100
        attempts = 0;

        printf("Welcome to Guess the Number!\n");
        printf("I'm thinking of a number between 1 and 100.\n");

        do {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess > number)
                printf("Too high! Try again.\n");
            else if (guess < number)
                printf("Too low! Try again.\n");
            else
                printf("🎉 Correct! You guessed it in %d attempts.\n", attempts);
        } while (guess != number);

        printf("Do you want to play again? (Y/N): ");
        scanf(" %c", &playAgain);
    } while (playAgain == 'Y' || playAgain == 'y');

    printf("Thanks for playing!\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice() {
    return rand() % 3;  // 0 = Rock, 1 = Paper, 2 = Scissors
}

const char* getChoiceName(int choice) {
    if (choice == 0) return "Rock";
    else if (choice == 1) return "Paper";
    else return "Scissors";
}

int main() {
    int user, computer;
    char playAgain;

    srand(time(0));  // Seed random number generator

    do {
        printf("Choose your move:\n");
        printf("0 = Rock, 1 = Paper, 2 = Scissors\n");
        printf("Your choice: ");
        scanf("%d", &user);

        if (user < 0 || user > 2) {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        computer = getComputerChoice();

        printf("You chose: %s\n", getChoiceName(user));
        printf("Computer chose: %s\n", getChoiceName(computer));

        if (user == computer)
            printf("It's a draw!\n");
        else if ((user == 0 && computer == 2) ||
                 (user == 1 && computer == 0) ||
                 (user == 2 && computer == 1))
            printf("🎉 You win!\n");
        else
            printf("Computer wins!\n");

        printf("Play again? (Y/N): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'Y' || playAgain == 'y');

    printf("Thanks for playing!\n");
    return 0;
}

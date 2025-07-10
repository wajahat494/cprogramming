#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, compChoice;

    // Seed random number generator
    srand(time(0));

    printf("Rock Paper Scissors Game\n");
    printf("Choose any one:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &userChoice);

    if(userChoice < 1 || userChoice > 3) {
        printf("Invalid choice. Please try again.\n");
        return 0;
    }

    compChoice = (rand() % 3) + 1;

    // Display user choice
    if(userChoice == 1)
        printf("You chose Rock\n");
    else if(userChoice == 2)
        printf("You chose Paper\n");
    else
        printf("You chose Scissors\n");

    // Display computer choice
    if(compChoice == 1)
        printf("Computer chose Rock\n");
    else if(compChoice == 2)
        printf("Computer chose Paper\n");
    else
        printf("Computer chose Scissors\n");

    // Deciding winner
    if(userChoice == compChoice) {
        printf("It's a Draw!\n");
    }
    else if((userChoice == 1 && compChoice == 3) || 
            (userChoice == 2 && compChoice == 1) || 
            (userChoice == 3 && compChoice == 2)) {
        printf("You Win!\n");
    }
    else {
        printf("Computer Wins!\n");
    }

    return 0;
}
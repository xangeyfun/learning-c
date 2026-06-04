#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int number = (rand() % 100) + 1;
    int guess;
    int amount = 0;

    while (1) {
        printf("\nGuess a number between 1-100: ");
        scanf(" %d", &guess);
        amount++;

        if (guess > number) {
            printf("Too high!\n");
        }

        else if (guess < number) {
            printf("Too Low!\n");
        }

        else {
            break;
        }

    }

    printf("\nYou guessed the number :D\n");
    printf("You took %d tries\n", amount);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

void lower(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    srand(time(NULL));

    char *choices[] = {"rock", "paper", "scissors"};

    while (1) {
        char user[10];
        printf("\n/- Enter Your Choice:\n");
        printf("| Rock\n");
        printf("| Paper\n");
        printf("| Scissors\n");
        printf("| Exit\n");
        printf("$> ");
        scanf(" %9s", user);

        lower(user);

        if (strcmp(user, "exit") == 0) {
            break;
        }

        if (strcmp(user, "rock") != 0 && strcmp(user, "paper") != 0 && strcmp(user, "scissors") != 0) {
            printf("Invalid input, try again.\n");
            continue;
        }

        int computah = rand() % 3;
        printf("\nComputer chose: '%s'\n", choices[computah]);

        if (strcmp(user, choices[computah]) == 0) {
            printf("Tie!");
        }

        // Win evals

        else if (strcmp(user, "rock") == 0) {
            if (computah == 1) {
                printf("You Lose!");
            } else {
                printf("You win!");
            }
        }

        else if (strcmp(user, "paper") == 0) {
            if (computah == 2) {
                printf("You Lose!");
            } else {
                printf("You win!");
            }
        }

        else if (strcmp(user, "scissors") == 0) {
            if (computah == 0) {
                printf("You Lose!");
            } else {
                printf("You win!");
            }
        }

        char con;
        printf("\n\n/- Play again? (y|n)");
        printf("\n$> ");
        scanf(" %c", &con);

        if (con == 'n') {
            break;
        }
    }
}
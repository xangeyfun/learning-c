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

char* capitalize(char str[]) {
    str[0] = toupper(str[0]);
    return str;
}

int main() {
    srand(time(NULL));

    char *choices[] = {"rock", "paper", "scissors"};
    int wins = 0;
    int losses = 0;
    int ties = 0;

    while (1) {
        char user[8];
        printf("\n/- Enter Your Choice:\n");
        printf("| Rock\n");
        printf("| Paper\n");
        printf("| Scissors\n");
        printf("| Exit\n");
        printf("$> ");
        scanf(" %7s", user);

        lower(user);

        if (strcmp(user, "exit") == 0) {
            printf("\nExiting...\n");
            break;
        }

        if (strcmp(user, "rock") != 0 && strcmp(user, "paper") != 0 && strcmp(user, "scissors") != 0) {
            printf("\nInvalid input, try again.\n");
            continue;
        }

        int computah = rand() % 3;
        char temp[8];
        strcpy(temp, choices[computah]);
        printf("\nComputer chose: '%s'\n", capitalize(temp));

        if (strcmp(user, choices[computah]) == 0) {
            printf("Tie!");
            ties++;
        }

        // Win evals

        else if (strcmp(user, "rock") == 0) {
            if (computah == 1) {
                printf("You Lose!");
                losses++;
            } else {
                printf("You win!");
                wins++;
            }
        }

        else if (strcmp(user, "paper") == 0) {
            if (computah == 2) {
                printf("You Lose!");
                losses++;
            } else {
                printf("You win!");
                wins++;
            }
        }

        else if (strcmp(user, "scissors") == 0) {
            if (computah == 0) {
                printf("You Lose!");
                losses++;
            } else {
                printf("You win!");
                wins++;
            }
        }

        char con;
        printf("\n\n/- Play again? (y|n)");
        printf("\n$> ");
        scanf(" %c", &con);

        if (con == 'n') {
            printf("\nExiting...");
            break;
        }
    }
    printf("\n/- Final Scores:\n");
    printf("| Wins: %d\n", wins);
    printf("| Losses: %d\n", losses);
    printf("| Ties: %d\n", ties);
    printf("\\- Thanks for playing!\n");
}
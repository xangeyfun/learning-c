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

int roll_dice(int sides) {
    if (sides < 1) {
        printf("\nInvalid number of sides. Please enter a positive integer.\n");
        return 0;
    }

    int roll = rand() % sides + 1;
    return roll;
}

int main() {
    srand(time(NULL));

    while (1) {
        char choice[5];

        printf("\n/- Dice Roller");
        printf("\n| Roll");
        printf("\n| Exit");
        printf("\n$> ");
        scanf(" %4s", choice);

        lower(choice);

        if (strcmp(choice, "exit") == 0) {
            printf("\nExiting...\n");
            break;
        } else {
            int sides;
            printf("\n/- How many sides does the die have? ");
            printf("\n$> ");
            scanf("%d", &sides);
            int result = roll_dice(sides);
            printf("\nYou rolled a %d!\n", result);
        }
    }
}
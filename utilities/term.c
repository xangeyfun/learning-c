#include <stdio.h>
#include <string.h>
#include <time.h>

void clear_screen() {
    printf("\033[H\033[J");
}

void help_menu() {
    printf("/- Help Menu:\n");
    printf("| help - Show this help menu\n");
    printf("| exit - Exit this program\n");
    printf("| clear - Clear the screen\n");
    printf("| time - Show the current date and time\n");
}

int main() {
    printf("Welcome to the Terminal Utilities!\n");
    char command[256];

    while (1) {
        printf("$> ");
        scanf(" %s", command);

        if (strcmp(command, "exit") == 0) {
            return 0;
        }

        else if (strcmp(command, "help") == 0) {
            help_menu();
        }

        else if (strcmp(command, "clear") == 0) {
            clear_screen();
        }

        else if (strcmp(command, "time") == 0) {
            time_t currentTime;
            time(&currentTime);
            printf("%s", ctime(&currentTime));
        }
    }
} 

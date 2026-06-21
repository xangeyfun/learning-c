#include <stdio.h>
#include <string.h>

char filename[] = "todo.txt";

void add_todo(char todo[]) {
    FILE* file = fopen(filename, "a");

    if (file == NULL) {
        printf("Error opening file\n");
        return;
    }

    fprintf(file, "%s\n", todo);

    fclose(file);
}

void list_todo() {
    FILE* file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening file\n");
        return;
    }

    int i = 1;
    char line[1000];
    printf("\n");

    while (fgets(line, 1000, file)) {
        if (strcmp(line, "\n") != 0) {
            printf("[%d] %s", i, line);
            i++;
        }
    }

    printf("\n");

    fclose(file);
}

void remove_todo(int todo) {
    FILE* file = fopen(filename, "r");
    FILE* temp = fopen("temp.txt", "w");

    if (file == NULL) {
        printf("Error opening file\n");
        return;
    }

    char line[256];
    int i = 1;

    while (fgets(line, sizeof(line), file)) {
        if (i != todo) {
            fputs(line, temp);
        }
        i++;
    }

    fclose(file);
    fclose(temp);

    remove("todo.txt");
    rename("temp.txt", "todo.txt");
}

int main() {
    FILE* file = fopen(filename, "r");
    
    if (file == NULL) {
        file = fopen(filename, "w");
    }

    if (file != NULL) {
        fclose(file);
    }

    int choice;

    while (1) {
        printf("/- Todo Thingy\n");
        printf("| 1. Add\n");
        printf("| 2. remove\n");
        printf("| 3. List\n");
        printf("| 4. Exit\n");
        printf("$> ");
        scanf(" %d", &choice);

        switch (choice) {
            case 1:
                printf("\n/- Enter a Todo To Add:");
                printf("\n$> ");

                getchar();

                char todo[256];

                fgets(todo, sizeof(todo), stdin);
                todo[strcspn(todo, "\n")] = '\0';

                add_todo(todo);

                printf("\n");
                break;

            case 2:
                list_todo();
                printf("/- Enter a Number Of a Todo To Remove:");
                printf("\n$> ");
                int number;

                scanf(" %d", &number);
                remove_todo(number);
                printf("\n");
                break;

            case 3:
                list_todo();
                break;

            case 4:
                printf("\nGoodbye!\n");
                return 0;
        }
    }
}
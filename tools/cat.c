#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argv[1] == NULL) {
        printf("Usage:\ncat <filename>\n\nExample:\ncat file.txt");
        return 1;
    }

    if (argc > 2) {
        printf("Too many arguments!");
        return 1;
    }

    FILE* file = fopen(argv[1], "r");

    if (file == NULL) {
        printf("File not found!");
    }

    char c;

    while ((c = fgetc(file)) != EOF) {
        printf("%c", c);
    }

    return 0;
}
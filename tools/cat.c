#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argv[1] == NULL) {
        printf("Usage:\ncat <filename>\n");
        return 1;
    }

    if (argc > 2) {
        printf("cat: Too many arguments\n");
        return 1;
    }

    FILE* file = fopen(argv[1], "r");

    if (file == NULL) {
        printf("cat: %s: No such file or directory\n", argv[1]);
        return 1;
    }

    char c;

    while ((c = fgetc(file)) != EOF) {
        printf("%c", c);
    }

    printf("\n");

    return 0;
}
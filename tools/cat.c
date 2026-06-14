#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage:\ncat <filename>\n");
        return 1;
    }

    int c;

    for (int i = 1; i < argc; i++) {
        FILE* file = fopen(argv[i], "r");
    
        if (file == NULL) {
            printf("cat: %s: No such file or directory\n", argv[i]);
            continue;
        }

        while ((c = fgetc(file)) != EOF) {
            putchar(c);
        }

        printf("\n");

        fclose(file);
    }

    return 0;
}
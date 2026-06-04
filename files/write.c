#include <stdio.h>

int main() {
    char name[] = "file.txt";
    FILE* f = fopen(name, "w");

    if (f == NULL) {
        printf("Failed to open file: %s", name);
    }

    fprintf(f, "Hello World!\n");
    fprintf(f, "Second line!\n");

    fclose(f);
    return 0;
}

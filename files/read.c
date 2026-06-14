#include <stdio.h>

char filename[] = "file.txt";

int main() {

    FILE* f = fopen(filename, "r");

    if (f == NULL) {
        printf("File not found: %s", filename);
        return 0;
    }

    char line[100];
    while (fgets(line, 100, f)) {
        printf("%s", line);
    }

    fclose(f);

    return 0;
}
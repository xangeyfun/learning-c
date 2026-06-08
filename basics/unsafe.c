#include <stdio.h>

int main() {
    int array[4096]= {0};

    int i = 7000;

    array[i] = 0;

    printf("%d\n", array[i]);
}

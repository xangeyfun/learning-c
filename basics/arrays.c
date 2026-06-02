#include <stdio.h>

int main() {
    int numbers[5];
    int total = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter a number: ");
        scanf(" %d", &numbers[i]);
    }

    int biggest = numbers[0];
    int smallest = numbers[0];

    printf("\nYou entered the numbers:\n"); 
    for (int i = 0; i < 5; i++) {
        printf("Number %d: %d\n", i + 1, numbers[i]);

        total = total + numbers[i];

        if (numbers[i] > biggest) {
            biggest = numbers[i];
        }

        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    printf("Largest: %d\n", biggest);
    printf("Smallest: %d\n", smallest);
    printf("Sum: %d", total);

    return 0;
}

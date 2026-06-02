#include <stdio.h>

int main() {
    float num1;
    float num2;
    char op;
    float result;

    while (1) {
        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter operator: ");
        scanf(" %c", &op);

        printf("Enter second number: ");
        scanf("%f", &num2);

        if (op == '+') {
            result = num1 + num2;
            printf("Result: %f", result);
        }

        else if (op == '-') {
            result = num1 - num2;
            printf("Result: %f", result);
        }

        else if (op == '/') {
            if (num2 == 0) {
                printf("You can't divide by 0");
                continue;
            }

            result = num1 / num2;
            printf("Result: %f", result);
        }
       
        else if (op == '*') {
            result = num1 * num2;
            printf("Result: %f", result);
        }

        char con;

        printf("\nContinue? (y|n)");
        scanf(" %c", &con);

        if (con == 'n') {
            break;
        } 
    }
    return 0;
}

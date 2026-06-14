#include <stdio.h>

int main() {
    double num1;
    double num2;
    char op;
    double result;

    while (1) {
        printf("/- Enter first number:\n");
        printf("$> ");
        scanf(" %lf", &num1);

        printf("\n/- Enter operator: (+ - * /)\n");
        printf("$> ");
        scanf(" %c", &op);

        printf("\n/- Enter second number:\n");
        printf("$> ");
        scanf(" %lf", &num2);

        printf("\n");

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

        printf("\n\n/- Continue? (y|n)\n");
        printf("$> ");
        scanf(" %c", &con);

        if (con == 'n') {
            break;
        } 
    }
    return 0;
}

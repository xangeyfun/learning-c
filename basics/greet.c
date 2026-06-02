#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int lenght = 0;

    printf("Enter your name: ");
    scanf(" %s", name);

    printf("Hello, %s\n", name);

    while (1) {
       if (name[lenght] == '\0') {
           break;
       }

       lenght++;
    }

    printf("Your name is %d chars long", lenght);

    if (strcmp(name, "xangey") == 0) {
      printf("\nHey xangey :3");
    }

    return 0;
}

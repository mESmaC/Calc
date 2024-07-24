#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "calc.h"

int main() {
    bool run = true;
    char input[50];
    int x = 0;
    int y = 0;

    while (run) {
        printf("C-Calc> ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "add") == 0) {

            printf("Enter Values to add> \n"); scanf("%d", &x);
            getchar(); printf("+\n");
            scanf("%d", &y); getchar();
            int sum = add(x, y);
            printf("Sum: %d\n", sum);

        } else if (strcmp(input, "exit") == 0) {
            system("clear");
            break;
        } else if (strcmp(input, "multiply") == 0) {

            printf("Enter factors to multiply> \n"); scanf("%d", &x);
            getchar(); printf("*\n");
            scanf("%d", &y); getchar();
            int multi = mult(x, y);
            printf("product: %d\n", multi);

        } else if (strcmp(input, "divide") == 0) {

            printf("Enter divisors to divide> \n"); scanf("%d", &x);
            getchar(); printf("/\n");
            scanf("%d", &y); getchar();
            int divide = divi(x, y);
            printf("Quotient: %d\n", divide);

        } else if (strcmp(input, "clear") == 0) {
            system("clear");
        }
    }

    return 0;
}

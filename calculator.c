// calculator.c (merged)
#include <stdio.h>
#include <string.h>

int main() {
    char mode[10];
    printf("Choose mode (dec/hex): ");
    scanf("%s", mode);

    if (strcmp(mode, "dec") == 0) {
        int a, b;
        char op;
        printf("Enter expression (a + b): ");
        scanf("%d %c %d", &a, &op, &b);

        switch (op) {
            case '+': printf("Result: %d\n", a + b); break;
            case '-': printf("Result: %d\n", a - b); break;
            case '*': printf("Result: %d\n", a * b); break;
            case '/': 
                if (b != 0) printf("Result: %d\n", a / b);
                else printf("Error: Division by zero\n");
                break;
            default: printf("Invalid operator\n");
        }
    } else if (strcmp(mode, "hex") == 0) {
        unsigned int a, b;
        char op;
        printf("Enter hexadecimal expression (A + B): ");
        scanf("%x %c %x", &a, &op, &b);

        switch (op) {
            case '+': printf("Result: %X\n", a + b); break;
            case '-': printf("Result: %X\n", a - b); break;
            case '*': printf("Result: %X\n", a * b); break;
            case '/':
                if (b != 0) printf("Result: %X\n", a / b);
                else printf("Error: Division by zero\n");
                break;
            default: printf("Invalid operator\n");
        }
    } else {
        printf("Invalid mode\n");
    }

    return 0;
}

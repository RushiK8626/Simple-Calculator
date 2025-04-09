#include <stdio.h>
#include <math.h> // Added for pow()

int main() {
    char op;
    double a, b, result;

    printf("Enter an expression (e.g. 2 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch(op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b != 0)
                result = a / b;
            else {
                printf("Error: Division by zero!\n");
                return 1;
            }
            break;
        case '^': result = pow(a, b); break; // New feature
        default:
            printf("Unsupported operation.\n");
            return 1;
    }

    printf("Result: %.2lf\n", result);
    return 0;
}

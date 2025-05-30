#include <stdio.h>

// Function to get user input
void getInput(double *num1, double *num2, char *op) {
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", op);

    printf("Enter first number: ");
    scanf("%lf", num1);

    printf("Enter second number: ");
    scanf("%lf", num2);
}

// Function to perform the calculation
double calculate(double num1, double num2, char op) {
    switch (op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/':
            if (num2 != 0) return num1 / num2;
            else {
                printf("Error: Division by zero.\n");
                return 0;
            }
        default:
            printf("Invalid operator.\n");
            return 0;
    }
}

int main() {
    double a, b, result;
    char operator;

    getInput(&a, &b, &operator);
    result = calculate(a, b, operator);

    printf("Result: %.2lf %c %.2lf = %.2lf\n", a, operator, b, result);

    return 0;
}

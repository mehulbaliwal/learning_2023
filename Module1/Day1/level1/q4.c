#include <stdio.h>

int main() {
    float operand1, operand2, result;
    char operator;
    printf("Enter Operand 1: ");
    scanf("%f", &operand1);
    printf("Enter Operator: ");
    scanf(" %c", &operator);
    printf("Enter Operand 2: ");
    scanf("%f", &operand2);
    if (operator == '+') {
        result = operand1 + operand2;
    } else if (operator == '-') {
        result = operand1 - operand2;
    } else if (operator == '*') {
        result = operand1 * operand2;
    } else if (operator == '/') {
        if (operand2 != 0) {
            result = operand1 / operand2;
        } else {
            printf("Division by zero is not allowed.\n");
            return 0; 
        }
    } else {
        printf("Please choose a valid operator.\n");
        return 0; 
    }
    printf("The result is: %.2f\n", result);

    return 0;
}
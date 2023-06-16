#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num = num | (1 << 0);
            break;
        case 2:
            num = num & ~(1 << 31);
            break;
        case 3:
            num = num ^ (1 << 15);
            break;
        default:
            printf("Error: Invalid operation type.\n");
            break;
    }
    return num;
}
int main() {
    int number, oper_Type;

    printf("Enter an integer (32 bits): ");
    scanf("%d", &number);
    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_Type);

    int result = bit_operations(number, oper_Type);
    printf("Result: %d\n", result);

    return 0;
}
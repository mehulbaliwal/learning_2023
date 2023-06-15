#include <stdio.h>
#include <stdint.h>

int main() {
    double num ; 
    scanf("%lf",&num);
    uint64_t bits = *(uint64_t *)&num;
    uint16_t exponent = (bits >> 52) & 0x7FF;

    printf("Exponent (hex): 0x%X\n", exponent);
    printf("Exponent (binary): ");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");

    return 0;
}

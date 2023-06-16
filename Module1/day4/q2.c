#include <stdio.h>

void printBits(int num) {
    unsigned int mask = 1 << 31;
    for (int i = 0; i < 32; i++) {
        int bit = (num & mask) ? 1 : 0;
        printf("%d", bit);
        mask >>= 1;
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);
    printf("Bits of the number: ");
    printBits(num);
    return 0;
}

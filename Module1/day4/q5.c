#include <stdio.h>
void findMinMaxDigits(int n, int numbers[]) {
    for (int i = 0; i < n; i++) {
        int minDigit = 9,maxDigit=0; 
        int temp = numbers[i];
        while (temp > 0) {
            int digit = temp % 10;
            if (digit < minDigit) {
                minDigit = digit;
            }
            if (digit > maxDigit) {
                maxDigit = digit;
            }
            temp /= 10;
        }
        if (minDigit == 9 || maxDigit == 0) {
            printf("Not Valid\n");
        } else if(minDigit==maxDigit){
            printf("Not Valid\n");
        }   else {
            printf("Smallest digit: %d\n", minDigit);
            printf("Largest digit: %d\n", maxDigit);
        }
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Not Valid\n");
        return 0;
    }
    int numbers[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    findMinMaxDigits(n, numbers);
    return 0;
}

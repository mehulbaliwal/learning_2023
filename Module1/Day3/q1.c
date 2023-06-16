#include <stdio.h>

void printSequence(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}
void printSpaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" ");
    }
}
void printReverseSequence(int n) {
    for(int i=n;i>0;i--){
        printf("%d",i);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int i=0;
    while(n){
        printSequence(n);
        printSpaces(i);
        printReverseSequence(n);
        i+=2;
        --n;
    }
    
    return 0;
}
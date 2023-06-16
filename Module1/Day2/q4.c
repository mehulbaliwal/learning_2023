#include <stdio.h>
int countSetBits(int num) {
    int count = 0;
    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
int main() {
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int totalSetBits = 0;
    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(arr[i]);
    }

    printf("Total number of set bits: %d\n", totalSetBits);

    return 0;
}
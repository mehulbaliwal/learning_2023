#include <stdio.h>

int main() {
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }
    printf("Sum of alternate elements: %d\n", sum);

    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j=n-1;
    for(int i=0;i<n/2;i++){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }
    printf("the reversed array is\n");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}

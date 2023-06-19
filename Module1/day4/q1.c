#include <stdio.h>
float average(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum/n;
}
int addition(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
int main()
{
    int n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sum=addition(a,n);
    float avg=average(a,n);
    printf("the summ is %d and average is %f ",sum,avg);
    return 0;
}

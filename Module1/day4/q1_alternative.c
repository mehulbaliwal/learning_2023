#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        sum+=x;
    }
    float avg=(float)sum/n;
    printf("the summ is %d and average is %f ",sum,avg);
    return 0;
}

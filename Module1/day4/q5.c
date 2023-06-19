#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    int sum_odd=0,sum_even=0;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(i%2==0){
            sum_even+=x;
        }
        else{
            sum_odd+=x;
        }
    }
    int ans=sum_even-sum_odd;
    printf("the difference between even and odd indexed elements is %d ",ans);
    return 0;
}

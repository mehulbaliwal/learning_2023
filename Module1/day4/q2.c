#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    int maxx=-2147483647,minn=2147483647,sum;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(maxx<x){
            maxx=x;
        }
        if(minn>x){
            minn=x;
        }
    }
    printf("the maximum is %d and minimum is %d ",maxx,minn);
    return 0;
}

#include <stdio.h>
int find_big_ifelse(int a,int b){
    if(a>b){
        printf("the bigger number is %d",a);
    }else{
        printf("the bigger number is %d",b);
    }
}
int find_big_tern(int a,int b){
    (a>b) ? printf("the bigger number is %d",a) : printf("the bigger number is %d",b);
}
int main()
{
    printf("enter 2 numbers \n");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("select 1 for if else and 2 for ternary operator \n");
    int choice;
    scanf("%d",&choice);
    if(choice==1){
        find_big_ifelse(a,b);
    }else{
        find_big_tern(a,b);
    }

    return 0;
}
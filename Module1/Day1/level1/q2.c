#include <stdio.h>
void grade(int marks){
    if(marks>100){
        printf("please enter valid marks");
    }else if(marks >= 90){
        printf("you've obtained grade A");
    }else if(marks >= 75){
        printf("you've obtained grade B");
    }else if(marks >= 60){
        printf("you've obtained grade C");
    }else if(marks >= 50){
        printf("you've obtained grade D");
    }else if(marks >= 0){
        printf("you've obtained grade F");
    }else{
        printf("please enter valid marks");
    }
}
int main()
{
    printf("enter your marks\n");
    int marks;
    scanf("%d",&marks);
    grade(marks);
    return 0;
}
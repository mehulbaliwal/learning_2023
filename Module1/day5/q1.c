#include <stdio.h>
typedef struct box{
    float length;
    float breadth;
    float height;
} Box;
void find_volume(Box *p){
    float vol=p->length * p->breadth * p->height;
    printf("the volme of the box is %f \n",vol);
}
void find_TSA(Box *p){
    float surface_area=2 * (p->length * p->breadth + p->breadth * p->height + p->height * p->length);
    printf("the total surface area of the box is %f \n",surface_area);
}
int main()
{
    Box box;
    Box *p = &box;
    printf("enter the length of the box: ");
    scanf("%f",&p->length);
    printf("enter the breadth of the box: ");
    scanf("%f",&p->breadth);
    printf("enter the height of the box: ");
    scanf("%f",&p->height);
    
    find_volume(p);
    find_TSA(p);
    return 0;
}

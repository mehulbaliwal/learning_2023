#include <stdio.h>
typedef struct complex{
    float real;
    float img;
} com;
void write_complex(com c1){
    if(c1.img < 0){
        printf("the complex number is %.1f - %.1fi\n",c1.real,-c1.img);
    }else{
        printf("the complex number is %.1f + %.1fi\n",c1.real,c1.img);
    }
}
void read_complex(com *c1){
    printf("enter the real part ");
    scanf("%f",&(c1->real));
    printf("enter the imaginary part ");
    scanf("%f",&(c1->img));
}
com addition(com c1,com c2){
    com sum;
    sum.real=c1.real+c2.real;
    sum.img=c1.img+c2.img;
    return sum;
}
com multiplication(com c1,com c2){
    com res;
    res.real = (c1.real * c2.real + c1.img * c2.img);
    res.img = (c1.real * c2.img + c2.real * c1.img);
    return res;
}
int main(){
    com c1,c2;
    printf("enter the first complex number\n");
    read_complex(&c1);
    printf("enter the second complex number\n");
    read_complex(&c2);
    printf("entered complex numbers are\n");
    write_complex(c1);
    write_complex(c2);
    
    com sum,product;
    sum=addition(c1,c2);
    product=multiplication(c1,c2);
    
    printf("the sum of both complex number is \n");
    write_complex(sum);
    printf("the product of both complex number is \n");
    write_complex(product);
    
    return 0;
    
}

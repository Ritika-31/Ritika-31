#include<stdio.h>

int main(){
    float r,d,cir,area;
    printf("enter radius");
    scanf("%f",&r);
    d=2*r;
    cir=2*3.14*r;
    area=3.14*r*r;
    printf("diameter is %f\n circumference is %f \n area is %f\n",d,cir,area);

    return 0;
}
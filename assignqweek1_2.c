#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter a number to check");
    scanf("%d",&a);
    if(a==0)
    printf("the given number %d is zero",a);
    else if(a<0)
    printf("the given number %d is negative",a);
    else
    printf("the given number %d is positive",a);
    return 0;
}
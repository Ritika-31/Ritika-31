#include<stdio.h>
int main(){
    int i,a,b,sum;
    sum=0;
    printf("enter a number to find sum");
    scanf("%d",&a);
    b=a;
    do{
        i=a%10;
        sum=sum+i;
        a=a/10;
    }
    while(a!=0);
    printf("the sum of %d is %d",b,sum);
    return 0;
}
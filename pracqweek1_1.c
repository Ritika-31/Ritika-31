#include<stdio.h>

int main(){
    int year,a,b,c;
    printf("enter year");
    scanf("%d",&year);
    if((year%4==0)&&((year%400==0)||(year%100!=0)))
    {
        printf("entered year is a leap year");
    }
    else{
        printf("not a leap year");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a,b,i;
    int ch;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    printf("enter 1 for addition 2 for sub 3 for mul 4 for division");
    scanf("%d",&ch);
    switch (ch){
    case 1:
    printf("the sum of the given number is %d",a+b);
    break;
    case 2:
    printf("the subtraction of the given number is %d",a-b);
    break;
    case 3:
    printf("the multiplicatin of the given number is %d",a*b);
    break;
    case 4:
    printf("the division of the given number is %d",a/b);
    break;
    default:
    printf("wrong operator");
    break;
}
    return 0;


}
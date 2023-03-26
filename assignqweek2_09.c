#include<stdio.h>

int main(){
    int x,y,z,i,j=5;
    for(i=1;i<=5;i++){
        for(x=1;x<=j;x++){
            printf("* ");
        }
        j--;
        printf("\n");
    }
    return 0;
}
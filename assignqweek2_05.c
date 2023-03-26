#include<stdio.h>

int main(){
    int i,j,x,y,z,k[100],l[100];
    printf("enter size of array");
    scanf("%d",&i);
    printf("enter elements in array");
    for(j=0;j<i;j++){
        scanf("%d",&k[j]);
    }
    for(x=0;x<i;x++){
        l[x]=k[x];
    }
    printf("copied array ------------>");
    for(z=0;z<i;z++){
        printf("%d",l[z]);
    }
    return 0;
}
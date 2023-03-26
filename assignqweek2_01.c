#include<stdio.h>

int check(int a[],int k);
int main(){
    int a[10],i,p,r;
    printf("enter element in an array of 10");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("enter number to check occurences");
    scanf("%d",&p);
    r=check(a,p);

    printf("the number %d occured %d number of times",p,r);
    return 0;
}
int check(int a[],int k){
    int j,count=0;
    for(j=0;j<10;j++){
       if(k==a[j]){
        count++;
       }
    }
    return count;
}
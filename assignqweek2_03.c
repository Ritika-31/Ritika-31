#include<stdio.h>
int s_hort(int *a,int b);
int main(){
    int a[100],b,i,k;
    printf("enter number of element in an array");
    scanf("%d",&b);
    printf("enter elements");
    for(int i=0;i<b;i++){
       scanf("%d",&a[i]);
    }
    s_hort(a,b);
    printf("sorted array----------->");
    for(k=0;k<=b;k++){
        printf("%d\n",a[k]);
    }
    return 0;
}
int s_hort(int *a,int b){
    int temp,i,j;
    for (i=0;i<b;i++){
        for(j=0;j<b;j++){
         if(a[j]>a[j+1]){
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
         }   
        }
    }
    return 0;
}
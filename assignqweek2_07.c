#include<stdio.h>

int main(){
    int i,j,k,l,x,y,z,arr[100],p;
    printf("enter number of element in an array");
    scanf("%d",&p);
    printf("enter positive and negative element");
    for(i=0;i<p;i++){
        scanf("%d",&arr[i]);
    }
    j=0;
    for(k=0;k<p;k++){
        for(j=k+1;j<p;j++){
            if(arr[k]>arr[j]){
               x=arr[k];
               arr[k]=arr[j];
               arr[j]=x;
            }
    }
    }
printf("new array--------------->");
for(y=0;y<p;y++){
    printf("%d\n",arr[y]);
}
    return 0;
}
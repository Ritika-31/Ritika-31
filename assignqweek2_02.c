#include<stdio.h>

int main(){
    int i,a,j,k,p,q=0,r,b,c,x,y,z,arr1[100],arr2[100],size;
    printf("enter number of elements in array 1");
    scanf("%d",&a);
    printf("enter element in array 1");
    for(x=0;x<a;x++){
        scanf("%d",&arr1[x]);
    }
     printf("enter number of elements in array 2");
    scanf("%d",&b);
    printf("enter element in array 2");
    for(y=0;y<b;y++){
        scanf("%d",&arr2[y]);
    }
    size=a+b;
for(c=a;c<size;c++){
arr1[c]=arr2[q];
q++;
}
/*printf("array");
for(z=0;z<size;z++){
    printf("%d\n",arr1[z]);
}*/
for(z=0;z<size;z++){
for(p=0;p<size;p++){
    if(arr1[p]>arr1[p+1]){
        j=arr1[p+1];
        arr1[p+1]=arr1[p];
        arr1[p]=j;
    }
}
}
printf("sorted array");
for(r=0;r<size;r++){
    printf("%d\n",arr1[r]);
}

    return 0;
}
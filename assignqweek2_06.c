#include<stdio.h>

int main(){
    int i,j,k,x,y,z,r[10],count,max_count=0,max_freq;
    printf("enter 10 array element to check maximum occuring number");
    for(i=0;i<10;i++){
        scanf("%d ",&r[i]);
    }
    for(j=0;j<10;j++){
        count=0;
        for(k=0;k<10;k++){
          if(r[j]==r[k]){
            count++;
          }
          if(count>max_count){
            max_count=count;
            max_freq=r[j];
          }
        }
    }
    printf("%d has max frequency with count %d",max_freq,max_count);
    return 0;
}
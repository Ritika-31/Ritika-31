#include<stdio.h>
#include<string.h>
int main(){
    int p,q,r,x,y,z,alpha=0,digits=0,space=0,spec_char=0;
    char arr[100];
    printf("enter a string to check");
    gets(arr);
    for(x=0;x<strlen(arr);x++){
        if((arr[x]>=65 && arr[x]<=90)||(arr[x]>=97 && arr[x]<=122)){
            alpha++;
        }
        else if(arr[x]>=48 && arr[x]<57){
            digits++;
        }
        else if(arr[x]==' '){
            space++;
        }
        else{
            spec_char++;
            }
        }
    
    printf("\nnumber of alphabet are %d \n digits are %d \n special characters are %d\n",alpha,digits,spec_char);
    return 0;
}
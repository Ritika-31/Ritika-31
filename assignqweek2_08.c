#include<stdio.h>
#include<string.h>
int main(){
    int i,j,k,l,x,y,z,vow=0,cons=0,space=0;
    char arr[100];
    printf("enter string");
    gets(arr);
    printf("%s",arr);
 // printf("size of array is %d",sizeof(arr));
    for(i=0;i<strlen(arr);i++){
        if((arr[i]=='a')||(arr[i]=='e')||(arr[i]=='i')||(arr[i]=='o')||(arr[i]=='u')){
            vow++;
        }
        else if(arr[i]==' '){
            space++;
        }
        else{
            cons++;
        }
    }
    printf("number of vowels are %d and consonant are %d space are %d",vow,cons,space);
    return 0;
}
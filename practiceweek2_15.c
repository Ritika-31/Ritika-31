#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char x[100];
    printf("enter a string");
    gets(x);
    for(i=0;i<strlen(x);i++){
        if((x[i]>='a' && x[i]<='z')||(x[i]>='A' && x[i]<'Z')){
            continue;
        }
        else{
            x[i]=' ';
        }
    }
    puts(x);
    return 0;
}
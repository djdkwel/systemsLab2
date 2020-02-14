#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[]){
    char arr[30];
    char word[30];
    int a[30];
    int b[30];
    printf("Please enter string:");
    scanf("%s",word);
    printf("Please enter string:");
    scanf("%s",arr);
    int i,n,sum = 0;
    for(i; i<sizeof(word);i++){
        a[i]=(int)word[i];
        sum=sum+a[i];
    }
    for(i; i<sizeof(arr); i++){
        b[i]=(int)word[i];
        sum=sum+b[i];
    }
    if(sizeof(a)==sizeof(b)){
        printf("They are the same");
    }
}
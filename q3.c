//Diandra Whittick 620103319
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[]){
    
    char arr[30];
    char word[30];
    int i =0;
    int ans;
    printf("Enter String:");
    scanf("%s",arr);
    printf("Enter String:");
    scanf("%s",word);
    int l1 = strlen(arr);
    int l2 = strlen(word);
    if(l1!=l2){
        printf("They are not the same");
    }
    else{
        while(i<l2){
            if(arr[i]==word[i]){
            ans=1;
            }
            else{
                ans=2;
            }
            i++;
        }
    }
    printf("anser is: %d",ans);
    if(ans==1){
        printf("They are the same");
    }
    else{
        printf("They are not the same");
    }
    
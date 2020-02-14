#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(int argc, char *argv[]){
    char str[30];
    int num[30];
    int j =0;
    int size = strlen(str);
    printf("Please enter string: \n");
    scanf("%s",str);
    
    
    for(int i; i < 6; i++){
        num[i]=(int)str[i];
        if(num[i-1]>num[i])
        {
            int b = num[i-1];
            int a = num[i];
            num[i-1] = a;
            num[i] = b;
        }
    }
    while(j<size){
        printf("%c",(char)num[j]);
        j++;
    }
    
}

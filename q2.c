//620103319
#include<stdio.h>
#include<string.h> 

int main(){
    char string[30];
    char temp;
    int j;
    int size = strlen(string);
    printf("Please enter string: \n");
    scanf("%s",string);
    for(int i=0; i < size-1; i++){
        for (j = 0; j < size -2 -i  ; j++){
            if(string[j]  > string[j+1]){
            temp = string[j];
          // putchar(temp);
            string[j] = string[j+1];
            string[j+1] = temp;
           // puts(string);

            }
        }
    }
    printf("%s",string);
  
}
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[8];
    int i,j;
    
    printf("Enter number: ");
    scanf("%d",&j);
    for(i=0;j>0;i++){
        a[i]=j%2;
        j=j/2;
    }
   while(i>=0){
       printf("%d",a[i]);
       i--;
   }
   int size=sizeof(a);
   printf("%d\n",size);
}
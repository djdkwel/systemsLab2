//Diandra Whittick 620103319
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10],b[10];
    int i,t,j,y;
    int k =7;

    
    printf("Enter number: ");
    scanf("%d",&y);
    printf("%d\n",y);
    
    if(y>=0){
        t=0;
        j=y;

    }
    else{
        j=abs(y);
        t=1;
    }
    for(i=0;j>0;i++){
        a[i]=j%2;
        j=j/2;
        
    }
    for(i;i<=7;i++){
        a[i]=0;
    }
    if(t==1){
        a[7]=1;
    }
   while(k>=0){
       printf("%d",a[k]);
       k--;
   }

}
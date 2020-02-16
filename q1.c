//Diandra Whittick 620103319
#include<stdio.h>
int main(){
    int i = 0;
    float a[2][3]={{1,2,3},{4,5,6}};
    float b[3][2]={{1,2},{3,4},{5,6}};
    float c[2][2];
    for (int i=0;i<2;i++){
        int num=0; 
        for (int t=0;t<3;t++){  
            for( int s=0; s<2;s++){
            
            num=num +(a[i][t]*b[t][s]);
            printf("%d \n",num); 

        }

        } 
        //c[i][i]=num; 

    }
  //for (int j=0;j<)  
}
    

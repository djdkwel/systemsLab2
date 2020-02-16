//Diandra Whittick 620103319
#include<stdio.h>
int main(){
    float a[2][3]={{1,2,3},{4,5,6}};
    float b[3][2]={{1,2},{3,4},{5,6}};
    float c[2][2];
     for (int row = 0; row < 2; row++)
    {
       for (int col = 0; col < 2; col++)
       {
           for (int i = 0; i < 3; i++)
           {
               c[row][col] += a[row][i] * b[i][col];
           }
       }

    }
    printf("c00: %f",c[0][0]);
    printf(" c01: %f\n",c[0][1]);
    printf("c10: %f",c[1][0]);
    printf(" c11: %f",c[1][1]);
    
    return 0;
   
}
   
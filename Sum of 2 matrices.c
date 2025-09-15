#include <stdio.h>

int main()
{
     int a,b;
     printf("No. of rows in matrix: ");
     scanf ("%d",&a);
     printf("No. of columns in matrix: ");
     scanf ("%d",&b);
     
     int mat1[a][b];
     printf("Elements of matrix 1 are: \n");
     for(int i=0;i<a;i++){
         for(int j=0;j<b;j++){
             scanf("%d",&mat1[i][j]);
         }
     }
     
     int mat2[a][b];
     printf("Elements of matrix 2 are: \n");
     for(int i=0;i<a;i++){
         for(int j=0;j<b;j++){
             scanf("%d",&mat2[i][j]);
         }
     }
     
     int mat3[a][b];
     printf("Sum of matrix 1 and matrix 2 is: \n");
     for(int i=0;i<a;i++){
         for(int j=0;j<b;j++){
             printf("%d ",mat1[i][j] + mat2[i][j]);
         }
         printf("\n");
     }
    return 0;
}

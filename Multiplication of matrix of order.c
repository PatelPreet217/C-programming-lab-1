#include <stdio.h>

int main() {
    int a,b,c,d,i,j,k;
    printf("Enter rows and colums of matrix 1: ");
    scanf("%d %d",&a,&b);
    printf("Enter rows and colums of matrix 2: ");
    scanf("%d %d",&c,&d);
    
    int mat1[a][b],mat2[c][d],mat3[a][d];
    printf("Enter elments of matrix 1: \n");
    for(int i=0; i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    
    printf("Enter elments of matrix 2: \n");
    for(int i=0; i<c;i++){
        for(int j=0;j<d;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    
    if(b!=c){
    printf("Multiplication is not possible.");
    return 0;
}

      for(int i=0; i<a;i++){
        for(int j=0;j<d;j++){
           mat3[i][j]=0;
        }
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            for(int k=0;k<b;k++){
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    
     printf("Multipliation of martix 1 and matrix 2 is: \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}

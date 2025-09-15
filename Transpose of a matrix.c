#include <stdio.h>

int main()
{
    int n;
    printf("Enter order of martix: ");
    scanf("%d",&n);
    
    int mat[n][n],trans[n][n];
    printf("Enter elements of matrix: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf ("%d",&mat[i][j]);
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            trans[i][j]=mat[j][i];
        }
    }
    
    printf("Transpose of matrix: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf ("%d ",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}

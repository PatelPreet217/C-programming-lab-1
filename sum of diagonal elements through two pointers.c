#include <stdio.h>

int main(){

int n,sum=0;
printf("Enter n: ");
scanf("%d",&n);

int arr[n][n];
printf("Enter elements: \n");
for( int i=0; i<n; i++ ){
   for( int j=0; j<n; j++ ){
   scanf("%d",&arr[i][j]);
   }
}

int *p[n];
int **q = p;

for( int i=0; i<n; i++ ){
p[i] = arr[i];
}

for( int i=0; i<n; i++ ){
sum += *(*(q + i) + i);
}

printf("Sum of diagonal elements is: %d",sum);
return 0;
}

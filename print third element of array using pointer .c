#include <stdio.h>

int main() {
    
   int n,*p;
   printf("Enter n: ");
   scanf("%d",&n);
   
   int arr[n];
   printf("Enter elemets of arrray: ");
   for( int i=0; i<n; i++ ){
       scanf("%d",&arr[i]);
   }
    p=(arr + 2);
    printf("Third elemet of array: %d",*p);
    return 0;
}

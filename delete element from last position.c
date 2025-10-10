#include <stdio.h>

int main() {
     int n,k;
     printf("Enter number of elements: ");
     scanf("%d",&n);
     
     int arr[n-1];
     printf("Enter elemets of array: ");
     for(int i=0; i<n; i++){
         scanf("%d",&arr[i]);
     }
     
     n--;
     
     printf("Enter new array: ");
     for(int i=0; i<n; i++){
         printf("%d ",arr[i]);
     }

    return 0;
}

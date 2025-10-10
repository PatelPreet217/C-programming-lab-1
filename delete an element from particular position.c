#include <stdio.h>

int main() {
     int n,k;
     printf("Enter number of elements: ");
     scanf("%d",&n);
     printf("Enter position: ");
     scanf("%d",&k);
     
     int arr[n-1];
     printf("Enter elemets of array: ");
     for(int i=0; i<n; i++){
         scanf("%d",&arr[i]);
     }
     
     for(int i=k+1; i<n; i++){
         arr[i-1]=arr[i];
     }
     n--;
     
     printf("Enter new array: ");
     for(int i=0; i<n; i++){
         printf("%d ",arr[i]);
     }

    return 0;
}

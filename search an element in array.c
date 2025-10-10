// Online C compiler to run C program online
#include <stdio.h>

int main() {
     int n,k;
     printf("Enter number of elements: ");
     scanf("%d",&n);
     printf("Target value: ");
     scanf("%d",&k);
     
     int arr[n];
     printf("Enter elemets of array:\n ");
     for(int i=0; i<n; i++){
         scanf("%d",&arr[i]);
     }
     
      int flag=0;
      for(int i=0; i<n; i++ ){
          if(arr[i]==k){
          flag=1;
          break;
          }
      }
      
      if(flag==1){
          printf("%d is found in the given array: ",k);
      }else{
          printf("%d is not found in the given array: ",k);
      }

    return 0;
}

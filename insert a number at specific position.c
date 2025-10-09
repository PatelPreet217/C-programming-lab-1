#include <stdio.h>

int main() {
    
    int n,k,num;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter position: ");
    scanf("%d",&k);
    printf("Enter number: ");
    scanf("%d",&num);
    
    int arr[n+1];
    printf("Enter elemets:");
    for( int i=0; i<n; i++){
    scanf("%d",&arr[i]);
    }
    
    for(int i=n; i>k; i--){
        arr[i]=arr[i-1];
    }
    
    arr[k]=num;
    n++;
    
    printf("New array is: \n");
    for( int i=0; i<n; i++){
    printf("%d ",arr[i]);
    }
    return 0;
}

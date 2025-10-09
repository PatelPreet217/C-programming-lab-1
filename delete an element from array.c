#include <stdio.h>

int main() {
    
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter elemets:");
    for( int i=0; i<n; i++){
    scanf("%d",&arr[i]);
    }
    
    for(int i=1; i<n; i++){
        arr[i-1]=arr[i];
    }
    n--;
    
    printf("New array is: \n");
    for( int i=0; i<n; i++){
    printf("%d ",arr[i]);
    }
    return 0;
}

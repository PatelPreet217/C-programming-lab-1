#include <stdio.h>

int main() {
    
    int n,num;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter number: ");
    scanf("%d",&num);
    
    int arr[n+1];
    printf("Enter elemets:");
    for( int i=0; i<n; i++){
    scanf("%d",&arr[i]);
    }
    
    
    
    arr[n]=num;
    n++;
    
    printf("New array is: \n");
    for( int i=0; i<n; i++){
    printf("%d ",arr[i]);
    }
    return 0;
}

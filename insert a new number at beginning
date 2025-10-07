#include <stdio.h>
int main() {
    int n,num;
    int pos=0;
    printf("Enter size array: ");
    scanf("%d",&n);
    printf("Enter new number to be added: ");
    scanf("%d",&num);

    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++ ){
        scanf("%d",&arr[i]);
    }

    for(int i=n; i>pos; i-- ){
        arr[i]=arr[i-1];
    }

    arr[pos]=num;
    n++;

    printf("Array after adding new element: \n");
    for(int i=0; i<n; i++ ){
        printf("%d ",arr[i]);
    }
        return 0;
    }

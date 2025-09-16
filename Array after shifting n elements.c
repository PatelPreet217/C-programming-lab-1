#include <stdio.h>

int main() {
    
    int n;
    printf ( " Enter n: ");
    scanf ( " %d", &n);
    
    int arr[10];
    printf ( " Enter 10 elements: ");
    for ( int i=0; i<10; i++ ) {
        scanf ( "%d", &arr[i] );
    }
    
    for ( int i=0; i<(10-n); i++ ){
        arr[i] = arr[i+n];
    }
    
    for (int i=(10-n); i<10; i++){
        arr[i] = 0;
    }
    
    printf ( " Array after shifting %d elements is: \n",n);
    for (int i=0; i<10; i++ ){
        printf ( "%d ", arr[i]);
    }

    return 0;
}

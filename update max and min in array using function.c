#include <stdio.h>
#include <limits.h>

void update_max_min_inArray( int n, int arr[n], int *max, int *min);

int main() {

    int n,max,min;
    printf( " Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf( "Enter elements of array: ");
    for ( int i=0; i<n; i++ ){
        scanf("%d", &arr[i]);
    }

    update_max_min_inArray(n, arr, &max, &min );

    printf("Maximum value in array is: %d\n", max);
    printf("Minimum value in array is: %d", min);

    return 0;
}

void update_max_min_inArray( int n, int arr[n], int *max, int *min){
   
    *max = arr[0];
    *min = arr[0];

    for ( int i=0; i<n; i++ ){
        if ( arr[i] > *max )
        *max = arr[i];
        if ( arr[i] < *min )
        *min = arr[i];
    }

}
    
    

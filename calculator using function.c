#include <stdio.h>

int sum( int a, int b);
int difference( int a, int b);
int product( int a, int b);
float division( int a, int b);

int main() {
    int a,b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    printf("Sum of %d and %d is: %d\n", a, b, sum(a, b));
    printf("Difference of %d and %d is: %d\n", a, b, difference(a, b));
    printf("Product of %d and %d is: %d\n", a, b, product(a, b));
    printf("Division of %d and %d is: %f\n", a, b, division(a, b));

    return 0;
}

int sum( int a, int b){
    return (a+b);

}

int difference( int a, int b){
    return (a-b);

}

int product( int a, int b){
    return (a*b);

}

float division( int a, int b){
    if ( b == 0 ) {
        printf("Cannot divided by zero. ");
    }
    return ((float)a/b);

}
    
    

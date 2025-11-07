#include <stdio.h>

int power( int x, int y);

int main() {
    int a,b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    printf("%d raised to the power %d is: %d", a,b,power(a, b));
    return 0;

}

int power( int x, int y){
    int product = 1;
    for( int i=1; i<=y; i++ ){
        product *= x;
    }
    return product;
}

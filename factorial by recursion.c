#include <stdio.h>
#include <limits.h>

int factorial( int n);

int main() {

    int n;
    printf( " Enter n: ");
    scanf("%d", &n);

    printf("Factorial of %d is: %d", n, factorial(n ));

    return 0;
}

int factorial( int n){

    if ( n == 0 ){
        return 1;
    }

    if ( n== 1 ){
        return 1;
    }
   int fnm1 = factorial(n-1);
   int fn = fnm1*n;

   return fn;

}
    
    

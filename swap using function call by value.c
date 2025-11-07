#include <stdio.h>
#include <limits.h>

void swap_numbers( int x, int y);

int main() {

    int a,b;
    printf( " Enter a: ");
    scanf("%d", &a);

    printf( " Enter b: ");
    scanf("%d", &b);
    
    printf("\n");
    swap_numbers(a, b);

    printf("a is: %d\n", a);
    printf("b is: %d", b);


    return 0;
}

void swap_numbers( int x, int y ){
   
    x = x + y;
    y = x - y;
    x = x - y;

    printf("a is: %d\n", x);
    printf("b is: %d\n\n", y);

}
    
    

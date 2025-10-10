#include <stdio.h>

int main() {
    
    int x,*p;
    printf("Enter x: ");
    scanf("%d",&x);
    
    p=&x;
    
    printf("Printing x using pointer: %d",*p);
    return 0;
}

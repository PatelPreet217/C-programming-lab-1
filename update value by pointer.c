#include <stdio.h>

int main() {
    
    int x,*p;
    printf("Enter x: ");
    scanf("%d",&x);
    
    p=&x;
    printf("Old value of x: %d\n",*p);
    
    
    *p=25;
    printf("Updated value of x: %d",*p);
    return 0;
    
}

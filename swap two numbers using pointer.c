#include <stdio.h>

int main() {
    
    int a,b,*p,*q;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    
    p=&a;
    q=&b;
    
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    
    printf("After swapping: a = %d  b = %d ",*p,*q);
    
    return 0;
}

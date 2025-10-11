#include <stdio.h>

int main() {

int x,*p,*r;
printf("Enter x: ");
scanf("%d",&x);

p=&x;
r=&x;

if((p == r)){
printf("Yes , both pointer point at same memory location.");
}

return 0;
}

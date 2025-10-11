#include <stdio.h>

int main() {

int x,*p,**q;
printf("Enter x: ");
scanf("%d",&x);

p=&x;
q=&p;

printf("Value of x using double pointer: %d",**q);

return 0;
}

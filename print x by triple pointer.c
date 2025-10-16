#include <stdio.h>

int main() {

int x,*p,**q,***r;
printf("Enter x: ");
scanf("%d",&x);

p = &x;
q = &p;
r = &q;

printf("Value of x by triple pointer is: %d",***r);

return 0;
}

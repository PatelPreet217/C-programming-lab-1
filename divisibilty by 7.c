#include <stdio.h>

int main() {
int a;
printf( "Enter a: ");
scanf( "%d",&a);
if (a%7==0 ){
printf( "number is divisible by 7");
}else {
printf( "number is not divisible by 7");
}
return 0;
}

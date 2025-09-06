#include<stdio.h>
void main(){
   float a,b,division,addition,subtraction,multiplication;
   printf("Enter a: ");
   scanf ( "%f",&a);
   printf("Enter b: ");
   scanf ( "%f",&b);
   addition = a+b;
   subtraction = a-b;
   division = a/b;
   multiplication = a*b;
   printf( "%f+%f=%f",a,b,addition);
   printf( "%f-%f=%f",a,b,subtraction);
   printf( "%f/%f=%f",a,b,division);
   printf( "%f*%f=%f",a,b,multiplication);
}


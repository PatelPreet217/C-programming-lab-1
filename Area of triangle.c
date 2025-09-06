#include <stdio.h>
int main(){
float A,H,L;
printf("Enter Length: ");
scanf("%f",&L);
printf("Enter Height: ");
scanf("%f",&H);
A=H*L/2;
printf("Area of Triangle = %2f\n",A);
return 0;
}

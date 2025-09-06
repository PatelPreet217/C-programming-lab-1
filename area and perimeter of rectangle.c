#include <stdio.h>
int main(){
float A,L,P,B;
printf("Enter Length: ");
scanf("%f",&L);
printf("Enter Breadth: ");
scanf("%f",&B);
A=L*B;
P=2*(L+B);
printf("Area of RECTANGLE = %2f\n",A);
printf("Perimeter of RECTANGLE = %2f",P);
return 0;
}

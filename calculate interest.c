#include <stdio.h>
int main(){
float I,P,R,N;
printf("Enter Principle: ");
scanf("%f",&P);
printf("Enter Rate: ");
scanf("%f",&R);
printf("Enter number of years: ");
scanf("%f",&N);
I=P*R*N/100;
printf("Interest = %2f",I);
}

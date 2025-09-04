#include <stdio.h>
    int main() {
   float dollar,rupees,pound;
   printf("Enter money in dollars: ");
   scanf("%f",&dollar);
   rupees=dollar*48;
   pound=rupees/70;
   printf("pound= %f",pound);
   return 0;
    }

#include <stdio.h>
int main(){
float netsales,grosssales,discount;
printf("Gross sales: ");
scanf("%f",&grosssales);
discount=grosssales/10;
netsales=grosssales-discount;
printf("Net sales = %2f\n",netsales);
return 0;
}

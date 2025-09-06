#include <stdio.h>
int main(){
float netsales,grosssalary,allowance,deduction;
printf("Gross salary: ");
scanf("%f",&grosssalary);
allowance=grosssalary/10;
deduction=grosssalary*3/100;
netsales=grosssalary+allowance-deduction;
printf("Net salary = %2f\n",netsales);
return 0;
}

#include<stdio.h>
int main()
{
float gross_salary,allowances,deductions,net_salary;
printf("Enter gross salary:");
scanf("%f",&gross_salary);
if(gross_salary>10000)
{
allowances=0.1*gross_salary;
deductions=0.03*gross_salary;
}
else if(gross_salary>5000)
{
allowances=0.07*gross_salary;
deductions=0.02*gross_salary;
}
net_salary=gross_salary + allowances - deductions;
printf("allowances=%2f\n",allowances);
printf("deductions=%2f\n",deductions);
printf("net salary=%2f\n",net_salary);
return 0;
}

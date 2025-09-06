#include <stdio.h>
int main() {
int value,sum=0;
float mean;
printf("Sum and Mean of any 10 values: \n");
for (int i=1;i<=10;i++){
printf("Number %d: ",i);
scanf("%d",&value);
sum+=value;
}
mean=sum/10;
printf("Sum = %d ,Mean =%f",sum,mean);
return 0;
}

#include <stdio.h>
int main (){
int n,reversedNumber=0,lastDigit;
printf("Enter n: ");
scanf("%d",&n);
while(n>0){
   lastDigit=n%10;
   reversedNumber=reversedNumber*10+lastDigit;
   n=n/10;
}
printf("Reversed number is: %d",reversedNumber);
return 0;
}




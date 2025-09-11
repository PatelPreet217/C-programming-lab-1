
#include <stdio.h>
int main(){
int n,digit,sum=0;
printf("Enter n: ");
scanf("%d",&n);
while(n>0){
    digit=n%10;
    n/=10;
    sum+=digit;
}
printf("Sum of digits is: %d",sum);
return 0;
}

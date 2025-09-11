#include <stdio.h>
int main(){
int n,digit,count=0;
printf("Enter n: ");
scanf("%d",&n);
while(n>0){
    digit=n%10;
    n/=10;
    count++;
}
printf("No. of digits is: %d",count);
return 0;
}

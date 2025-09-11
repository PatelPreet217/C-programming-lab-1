#include <stdio.h>
int main(){
int n,digit,sum=0,a;
printf("Enter n: ");
scanf("%d",&n);
a=n;
while(n>0){
    digit=n%10;
    n/=10;
    sum+=digit*digit*digit;
}
if(sum==a){
printf("Number is an armstrong number");
}else{
    printf("Number is not an armstrong number");
}
return 0;
}

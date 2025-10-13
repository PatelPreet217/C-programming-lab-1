#include <stdio.h>
int main() {
int n,a,digit,reversed=0;
printf("Enter n:" );
scanf("%d",&n);

a=n;
while(n>0){
digit=n%10;
reversed=reversed*10+digit;
n/=10;
}
printf("Reversed number is: %d\n",reversed);
if(reversed==a){
   printf("Number is palindrome");
}else{
    printf("Number is not palindrome");
}
return 0;
}


#include <stdio.h>
int main() {
int n,digit,reversed=0;
printf("Enter n:" );
scanf("%d",&n);
while(n>0){
digit=n%10;
reversed=reversed*10+digit;
n/=10;
}
printf("Reversed number is: %d\n",reversed);
if(reversed==n){
   printf("Number is palindrome");
}else{
    printf("Number is not palindrome");
}
return 0;
}

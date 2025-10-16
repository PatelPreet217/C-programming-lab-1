#include <stdio.h>
#include <string.h>

int main(){

char str[100],*mid,*p;
printf("Enter a string: ");
gets(str);

int len = strlen(str);

mid = str + len/2;
p = &mid;

 if( len%2 == 0){
    printf("Middle character of string: %c and %c\n",*(mid-1),*mid);
 }else{
    printf("Middle character of string: %c\n",p);
}
 printf("Remainder after middle character: %s",mid);

 return 0;
}

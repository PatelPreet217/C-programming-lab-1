#include <stdio.h>
int main(){
int n,sum=0;
for(int i=1;i<=100;i++){
if ((i%3)==0)
sum+=i;
}
printf("Sum of all numbers divisible by 3 from 1 to 100: %d\n",sum);
return 0;
}

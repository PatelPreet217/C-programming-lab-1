#include <stdio.h>
int main(){
int n;
printf("Print all numbers divisible by 5 from 1 to 100: \n");
for(int i=1;i<=100;i++){
if ((i%5)==0)
printf("%d\n",i);
}
return 0;
}

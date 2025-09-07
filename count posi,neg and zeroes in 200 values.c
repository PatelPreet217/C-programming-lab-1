#include <stdio.h>
int main(){
int arr[200],pos,neg,zero;
printf("Enter 200 numbers: ");
for(int i=0;i<200;i++){
scanf("%d",&arr[i]);
}
pos=0;
neg=0;
zero=0;

for (int i=0;i<200;i++){
if(arr[i]>0)
    pos++;
if(arr[i]<0)
    neg++;
if(arr[i]==0)
    zero++;
}
printf("There are/is %d positive numbers \n",pos);
printf("There are/is %d negative numbers \n",neg);
printf("There are/is %d zeroes ",zero);
return 0;
}

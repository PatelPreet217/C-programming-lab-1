#include <stdio.h>
int main() {
int arr[100],max,min;
printf("Enter 100 numbers: ");
for(int i=0;i<100;i++){
scanf("%d",&arr[i]);
}
max = arr[0];
min = arr[0];

for(int i=0;i<100;i++){
if(arr[i]>max){
max=arr[i];
}
else if(arr[i]<min){
min=arr[i];
}
}
printf("Largest number is: %d",max);
printf("Smallest number is: %d",min);
return 0;
}

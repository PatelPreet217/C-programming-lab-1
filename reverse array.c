#include <stdio.h>
int main(){
int arr[5];
printf("Enter 5 elemets:\n ");
for(int i=0;i<5;i++){
scanf("%d",&arr[i]);
}


for(int i=0;i<5/2;i++){
int temp=arr[i];
arr[i]=arr[4-i];
arr[4-i]=temp;
}

printf("Reversed array is:\n ");
for(int i=0;i<5;i++){
printf("%d ",arr[i]);
}
}

#include <stdio.h>
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
printf("Numbers from 1 to %d: \n",n);
for(int i=2;i<=n;i+=2){
printf("%d\n",i);
}
return 0;
}


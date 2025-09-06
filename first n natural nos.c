#include <stdio.h>
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
printf("Numbers from 1 to %d: \n",n);
for(int i=1;i<=n;i++){
printf("%d\n",i);
}
return 0;
}


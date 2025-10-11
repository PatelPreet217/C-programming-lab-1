#include <stdio.h>

int main() {

int n,*p,*q;
printf("Enter n: ");
scanf("%d",&n);

int a[n],b[n];
printf("Elemets of first array: \n");
for( int i=0; i<n; i++ ){
    scanf("%d",&a[i]);
}

p=a;
q=b;

for( int i=0; i<n; i++ ){
    *(q+i)=*(p+i);
}

printf("Elements of second array is: \n");
for( int i=0; i<n; i++ ){
    printf("%d ",*(q+i));
}

return 0;
}

#include <stdio.h>

int main() {
int net,gross,discount;
printf( "Enter gross slaray: ");
scanf( "%d",&gross);
if ( gross>20000) {
discount =gross*15/100;
}else if(gross>10000){
discount=gross/10;
}else {
discount=gross/20;
}
net=gross-discount;
printf( "discount: %d\n",discount);
printf( "net sales = %d", net);
return 0;
}

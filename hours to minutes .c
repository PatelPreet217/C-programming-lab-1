#include<stdio.h>
void main() {
   int hours,minutes;
   printf( "Enter hours: ");
   scanf ( "%d" ,&hours);
   minutes = hours*60;
   printf("Minutes = %d",minutes);
}

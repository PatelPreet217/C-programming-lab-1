#include<stdio.h>
void main() {
   int hours,minutes;
   printf( "Enter minutes: ");
   scanf ( "%d" ,&minutes);
   hours = minutes/60;
   printf("hours = %d",hours);
}

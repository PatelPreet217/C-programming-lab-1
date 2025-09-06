#include <stdio.h>
int main(){
float sub1,sub2,sub3,total,average;
printf("Marks in subject 1: ");
scanf("%f",&sub1);
printf("Marks in subject 2: ");
scanf("%f",&sub2);
printf("Marks in subject 3: ");
scanf("%f",&sub3);
total=sub1+sub2+sub3;
average=total/3;
printf("Average of subject = %2f\n",average);
printf("total marks = %2f\n",total);
return 0;
}

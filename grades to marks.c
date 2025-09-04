#include <stdio.h>
int main() {
   int sub1,sub2,sub3,total,average;
   printf("Enter marks in sub1: ");
   scanf("%d", &sub1);
   printf("Enter marks in sub2: ");
   scanf("%d", &sub2);
   printf("Enter marks in sub3: ");                                                                     : ");
   scanf("%d", &sub3);
   total=sub1+sub2+sub3;
   average = total/3;
   printf("Total marks= %d\n",total);
   printf("Average of marks= %d"\n,average);
   if(sub1<35 || sub2<35 || sub3<35){
   printf("Result=fail");
   }else if(average >=70){
   printf("Result=distinction");
   }else if(average >=60){
   printf("Result=first class");
   }else if(average >=50){
   printf("Result=second class");
   }else if(average >=35){
   printf("Result=third class");
   }else {
   printf("Result=fail");
   }
   return 0;
}

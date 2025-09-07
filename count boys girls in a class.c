#include <stdio.h>
int main(){
int male,female;
char students[50];
printf("Enter gender of students B for boy and G for girl: ");
for(int i=0;i<50;i++){
scanf(" %c",&students[i]);
}
male=0;
female=0;

for (int i=0;i<50;i++){
if(students[i]=='B')
    male++;
if(students[i]=='G')
    female++;
}
printf("There are %d boys \n",male);
printf("There are %d girls ",female);
return 0;
}

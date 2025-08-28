#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter Any Number:");
scanf("%f",&a);
printf("Enter Any Number:");
scanf("%f",&b);
printf("Enter Any Number:");
scanf("%f",&c);
if(a>b && a>c && b>c)
{
printf("a is largest and c is smallest");
}
else if(a>b && a>c && b<c)
{
printf("a is largest and b is smallest");
}
else if(b>a && b>c && a<c)
{
printf("b is largest and a is smallest");
}
else if(b>a && b>c && c<a)
{
printf("b is largest and c is smallest");
}
else if(c>b && c>a && b<a)
{
printf("c is largest and b is smallest");
}
else if(c>b && c>a && a<b)
{
printf("c is largest and a is smallest");
}
return 0;
}

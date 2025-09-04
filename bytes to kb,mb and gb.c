#include <stdio.h>
    int main() {
   float bytes,KB,MB,GB;
   printf("bytes: ");
   scanf("%f",&bytes);
   KB=bytes/1000;
   MB=bytes/1000000;
   GB=bytes/1000000000;
   printf("KB= %f\n",KB);
   printf("MB= %f\n",MB);
   printf("GB= %f",GB);
   return 0;
    }

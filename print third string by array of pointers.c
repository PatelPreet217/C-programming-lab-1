#include <stdio.h>

int main() {
char *arr[] = {"Book","Pen","Pencil","Compass"};

char **p = arr;
printf("Strings of array: \n");
for( int i=0; i<4; i++){
    printf("%s ",*(p+i));
}

printf("\n");

printf("Third stirng of arrray is: %s", *(p+2));

return 0;
}

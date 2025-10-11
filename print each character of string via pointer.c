#include <stdio.h>
#include <string.h>

int main() {

int n;
char *p;
printf("Enter n: ");
scanf("%d",&n);
getchar();

char name[n];
printf("Enter a word: ");
fgets( name, n , stdin);

name[strcspn(name, "\n")] = '\0';

int len=strlen(name);
printf("String printed through pointer: ");
for(int i=0; i<len; i++ ){
    printf("%c ",*(name + i ));
}

return 0;
}

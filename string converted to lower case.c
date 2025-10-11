#include <stdio.h>
#include <string.h>

int main() {

int n;
printf("Enter n: ");
scanf("%d",&n);
getchar();

char name[n];
printf("Enter a word: ");
fgets( name, sizeof(name) , stdin);

name[strcspn(name, "\n")] = '\0';

printf("String converted to lower case: %s",strlwr(name));
}

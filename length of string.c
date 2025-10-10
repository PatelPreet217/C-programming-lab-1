// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    getchar();
    
     char name[n];
     
     printf("Enter a word: ");
     fgets( name, sizeof(name), stdin);
     
     name[strcspn(name, "\n")] = '\0';

     
     printf("Length of the string:%d ",strlen(name));
    return 0;
}

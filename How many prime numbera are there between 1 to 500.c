#include <stdio.h>

int main() {
    int i, j,count=0;
    printf ("How many prime number are there between 1 to 500??\n");
    for (i = 2; i <= 500; i++) {
        for (j = 2; j <= i; j++) {
            if (i % j == 0)
                break;
        }
        if (i == j)
            count++;
        
    }
    printf ("There a %d prime numbers between 1 to 500",count);
    return 0;
}

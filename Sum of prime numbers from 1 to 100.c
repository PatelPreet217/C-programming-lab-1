#include <stdio.h>

int main() {
    int i, j,sum=0;
    printf ("Sum of Prime numbers from 1 to 500 are: \n");
    for (i = 2; i <= 500; i++) {
        for (j = 2; j <= i; j++) {
            if (i % j == 0)
                break;
        }
        if (i == j)
            sum += i;
        
    }
    printf ("%d",sum);
    return 0;
}

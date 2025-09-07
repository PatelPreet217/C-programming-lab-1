#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, mean;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    mean = sum / n;

    printf("\nSum = %.2f", sum);
    printf("\nMean = %.2f\n", mean);

    return 0;
}

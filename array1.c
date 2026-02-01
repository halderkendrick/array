#include <stdio.h>

int main() {
    int n;
    float num[100];
    float sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%f", &num[i]);
        sum += num[i];
    }

    float avg = sum/n;

    printf("Sum = %.0f\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}

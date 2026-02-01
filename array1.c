#include <stdio.h>

int main() {
    int n;
    int num[100];
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    printf("Sum = %d\n", sum);
    return 0;
}

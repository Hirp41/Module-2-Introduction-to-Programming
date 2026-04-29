#include <stdio.h>

int main() {
    int n, i;
    float a[100], sum = 0, avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%f", &a[i]);
        sum += a[i];
    }

    avg = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
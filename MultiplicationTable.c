#include <stdio.h>

int main() {
    int n, range, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter range: ");
    scanf("%d", &range);

    for(i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
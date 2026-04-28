#include <stdio.h>

int main() {
    int n, i, j, flag;

    printf("Enter a number: ");
    scanf("%d", &n);

    flag = 1;

    if(n <= 1)
        flag = 0;
    else {
        for(i = 2; i <= n/2; i++) {
            if(n % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    printf("Primes from 1 to %d:\n", n);

    for(i = 2; i <= n; i++) {
        flag = 1;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("%d ", i);
    }

    return 0;
}
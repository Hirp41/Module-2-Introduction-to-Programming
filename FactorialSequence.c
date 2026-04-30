#include <stdio.h>

long long fact_iter(int n) {
    long long f = 1;
    int i;
    for(i = 1; i <= n; i++)
        f *= i;
    return f;
}

long long fact_rec(int n) {
    if(n == 0 || n == 1)
        return 1;
    return n * fact_rec(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial using iteration = %lld\n", fact_iter(n));
    printf("Factorial using recursion = %lld\n", fact_rec(n));

    printf("Iterative is faster and uses less memory\n");

    return 0;
}
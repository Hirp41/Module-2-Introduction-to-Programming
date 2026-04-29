#include <stdio.h>

int fib(int n) {
    if(n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence:\n");
    for(i = 0; i < n; i++)
        printf("%d ", fib(i));

    printf("\n");

    printf("Nth Fibonacci using recursion = %d\n", fib(n-1));

    if(n <= 1)
        c = n;
    else {
        for(i = 2; i < n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        if(n == 1)
            c = 0;
        else
            c = b;
    }

    printf("Nth Fibonacci using iteration = %d\n", c);

    printf("Recursive method is slower, iterative is faster\n");

    return 0;
}
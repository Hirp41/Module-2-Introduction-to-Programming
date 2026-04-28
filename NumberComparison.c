#include <stdio.h>

int main() {
    int a, b, c;
    int largest, smallest;
    int choice;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("1. Using if-else\n2. Using switch-case\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            if(a >= b && a >= c)
                largest = a;
            else if(b >= a && b >= c)
                largest = b;
            else
                largest = c;

            if(a <= b && a <= c)
                smallest = a;
            else if(b <= a && b <= c)
                smallest = b;
            else
                smallest = c;

            printf("Largest = %d\nSmallest = %d\n", largest, smallest);
            break;

        case 2:
            switch((a >= b && a >= c) ? 1 : (b >= a && b >= c) ? 2 : 3) {
                case 1: largest = a; break;
                case 2: largest = b; break;
                case 3: largest = c; break;
            }

            switch((a <= b && a <= c) ? 1 : (b <= a && b <= c) ? 2 : 3) {
                case 1: smallest = a; break;
                case 2: smallest = b; break;
                case 3: smallest = c; break;
            }

            printf("Largest = %d\nSmallest = %d\n", largest, smallest);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
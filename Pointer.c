#include <stdio.h>

int main() {
    int num = 10;      
    int *ptr;          

    ptr = &num;        
    printf("Before modification:\n");
    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", &num);
    printf("Pointer ptr stores address = %p\n", ptr);

    *ptr = 25;

    printf("\nAfter modification using pointer:\n");
    printf("Value of num = %d\n", num);

    return 0;
}

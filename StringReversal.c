#include <stdio.h>

void reverse(char str[]) {
    int i = 0, len = 0;
    char temp;

    while(str[len] != '\0')
        len++;

    for(i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverse(str);

    printf("Reversed string = %s\n", str);

    return 0;
}
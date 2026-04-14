#include <stdio.h>
#include<string.h>

int main() {
    char s1[100];
    char s2[100];

    printf("Enter String s1: ");
    scanf("%s",s1);
    printf("\nEnter String s2: ");
    scanf("%s",s2);
    strcat(s1,s2);
    printf("\nConcatenated string: %s",s1);
    printf("\nLength of string: %d",strlen(s1));
    return 0;
}

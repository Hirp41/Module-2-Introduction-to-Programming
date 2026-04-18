#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50],s2[50];
    int x;
    printf("Enter the string: ");
    gets(s1);

    strcpy(s2,s1);
    strrev(s2);
    printf("\nString 2: %s",s2);

    x=strcmp(s1,s2);
    if(x==0)
    {
        printf("\nString is palindrome");
    }
    else
    {
        printf("\nString is not palindrome");
    }
}

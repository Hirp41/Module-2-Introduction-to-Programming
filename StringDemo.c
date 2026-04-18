#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50],s2[50],s3[50];
    int l1,x;
    printf("Enter String 1: ");
    //scanf("%d",&s1);
    gets(s1);   //scanf is replaced by gets in strings
    l1=strlen(s1);
    printf("\nLength of s1: %d",l1);
    printf("\nEnter String 2: ");
    gets(s2);
    x=strcmp(s1,s2);     //compares on the basis of ascii value
    if(x==0)
    {
        printf("\nStrings are same");
    }
    else
    {
        printf("\nStrings are different");
    }
    strcpy(s3,s1);
    printf("\nAfter copy string 3 is %s",s3);
    strcat(s1,s2);
    printf("\nAfter concate string 1 is %s",s1);
    strrev(s1);
    printf("\nAfter reversing %s",s1);
}

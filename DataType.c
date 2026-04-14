#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;

    printf("Enter integer: ");
    scanf("%d",&a);
    printf("\nEnter float: ");
    scanf("%f",&b);
    printf("\nEnter character: ");
    scanf("%s",&c);

    printf("\nInteger: %d",a);
    printf("\nFloat: %f",b);
    printf("\nCharacter: %c",c);

    return 0;
}

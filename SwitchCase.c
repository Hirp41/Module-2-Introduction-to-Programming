#include<stdio.h>
void main()
{
    int a,b,choice,ans;

    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("\nEnter the value of B: ");
    scanf("%d",&b);
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");

    printf("\nEnter the choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        ans=a+b;
        printf("\nAddition: %d",ans);
        break;

    case 2:
        ans=a-b;
        printf("\nSubtraction: %d",ans);
        break;

    case 3:
        ans=a*b;
        printf("\nMultiplication: %d",ans);
        break;

    case 4:
        ans=a/b;
        printf("\nDivision: %d",ans);
        break;
    default:
        {
            printf("\nInvalid choice");
        }
    }
}

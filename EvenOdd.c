#include<stdio.h>
int main()
{
    int a,month;
    printf("Enter the number which is to be checked: ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("\nThe number entered is even.");
    }
    else
    {
        printf("\nThe entered number is odd.");
    }
    printf("\nEnter the month(1-12): ");
    scanf("%d",&month);
    switch(month)
    {
    case 1:
    printf("\nJanuary");
    break;
    case 2:
    printf("\nFebruary");
    break;
    case 3:
    printf("\nMarch");
    break;
    case 4:
    printf("\nApril");
    break;
    case 5:
    printf("\nMay");
    break;
    case 6:
    printf("\nJune");
    break;
    case 7:
    printf("\nJuly");
    break;
    case 8:
    printf("\nAugust");
    break;
    case 9:
    printf("\nSeptember");
    break;
    case 10:
    printf("\nOctober");
    break;
    case 11:
    printf("\nNovember");
    break;
    case 12:
    printf("\nDecember");
    break;
    default:
        printf("\nInvalid number month doesn't exist.");
        break;
    }
    return 0;
}

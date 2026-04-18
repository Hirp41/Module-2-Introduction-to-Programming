#include<stdio.h>
void main()
{
    int n,sum=0;

    printf("Enter N: ");
    scanf("%d",&n);

    do
    {
        sum=sum+n;
        n--;
    }while(n>0);
    printf("\nSum: %d",sum);

}


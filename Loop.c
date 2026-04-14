#include<stdio.h>
int main()
{
    int x=1;
    printf("\nFor loop: \n");
    for(int i=1;i<=10;i++)
    {
        printf("\n%d",i);
    }
    printf("\nWhile loop: \n");
    while(x<11)
    {
        printf("\n%d",x);
        x++;
    }
    printf("\nDo-While loop: \n");
    int j=1;
    do
    {
        printf("\n%d",j);
        j++;
    }while(j<=10);
}

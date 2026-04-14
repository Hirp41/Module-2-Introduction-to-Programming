#include<stdio.h>
void main()
{
    for(int i=0;i<10;i++)
    {
        if(i==5)
        {
            break;
        }
        printf("%d\n",i);
    }

    printf("\nContinue statement");
    for(int j=0;j<10;j++)
    {
        if(j==3)
            continue;
        printf("\n%d",j);
    }
}


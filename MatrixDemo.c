#include<stdio.h>

int main()
{
    int a[5];
    int i, j;

    // One Dimensional Array (5 elements)
    printf("----One Dimensional Array----\n");
    for(i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("Elements are:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    // Two Dimensional Array (3x3)
    printf("\n----Two Dimensional Array (3x3)----\n");
    int b[3][3];
    int sum = 0;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
            sum += b[i][j];   // Adding to sum
        }
    }

    printf("\nMatrix Elements:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements = %d\n", sum);

    return 0;
}


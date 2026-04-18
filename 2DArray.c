#include<stdio.h>
void main()
{
    int i,j,a[3][3];

    printf("\nEnter array elements");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEnter %d row and %d column elemnts: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n2D array elements are");
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
              printf("\na[%d][%d] : %d",i,j,a[i][j]);     //matrix form ma karvu hoy to \n ni jagya e \t kari devanu 

            }
        }


}


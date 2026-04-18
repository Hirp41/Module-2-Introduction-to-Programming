#include<stdio.h>
void main()
{
    int i,j,sum=0,temp,a[5];

    printf("\nEnter the elements of array\n");
    for(i=0;i<5;i++)
    {
        printf("\nEnter %d elemnt: ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("\nSum: %d",sum);
}

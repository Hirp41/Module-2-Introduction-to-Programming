#include<stdio.h>
void main()
{
    int i,j,sum=0,temp,a[5];

    printf("\nEnter the elements of array\n");
    for(i=0;i<5;i++)
    {
        printf("\nEnter %d element: ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("\nSum: %d",sum);

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])           //descending mate sign change kari devani<
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nAscending order");
    for(i=0;i<5;i++)
    {
        printf("\n %d",a[i]);
    }
}

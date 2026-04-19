#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void main()
{
    int a,b;
    printf("\nEnter A: ");
    scanf("%d",&a);
    printf("\nEnter B: ");
    scanf("%d",&b);
    printf("\nValue of A & B before swaping %d & %d",a,b);
    swap(&a,&b);       //call by reference 
    printf("\nValue of A & B after swaping %d & %d",a,b);

}

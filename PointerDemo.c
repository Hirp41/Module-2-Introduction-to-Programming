#include<stdio.h>
void main()
{
    int a,b;
    int *p,*q;   //pointer declared

    printf("\nEnter A: ");
    scanf("%d",&a);
    p=&a;
    printf("\nA: %d",a);
    printf("\np: %u",p);  //Address of a 
    printf("\n*p: %d",*p);  //value of a

    printf("\nEnter B: ");
    scanf("%d",&b);
    q=&b;
    printf("\nB: %d",b);
    printf("\nq: %u",q);
    printf("\n*q: %d",*q);
}

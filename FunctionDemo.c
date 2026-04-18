#include<stdio.h>
void printline()    //Function with no argument & no return value(void).
{
    int i;
    for(i=0;i<20;i++)
    {
        printf("*");
    }
}

void add(int a, int b)       //Function with argument & no return value
{
    printf("\nAddition: %d",a+b);   
}

int sub(int a,int b)         //Function with argument & no return value
{
    return a-b;       
}

void main()
{
    printline();   //Call a function

    int x,y;     //user defined value for additon
    printf("\nEnter the value: ");
    scanf("%d",&x);
    printf("\nEnter the value: ");
    scanf("%d",&y);
    add(x,y);


    printf("\nEnter the value: ");
    scanf("%d",&x);
    printf("\nEnter the value: ");
    scanf("%d",&y);
    sub(x,y);
    printf("\nSubtraction: %d",sub(x,y));  //return type ma value return thse but print nai thay etle aa lakhvu pade
}

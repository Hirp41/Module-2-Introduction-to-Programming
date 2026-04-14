#include<stdio.h>
int main()
{
    int a,b ;
    printf("Enter A & B: \n");
    scanf("%d %d",&a,&b);

    //arithmetic
    printf("\nArithmetic operations: \n");
    printf("\nAddition: %d",a+b);
    printf("\nSubtraction: %d ",a-b);
    printf("\nMultiplication: %d",a*b);
    printf("\nDivision[a/b]: %d",a/b);
    printf("\nModulus: %d\n",a%b);

    printf("\nRelational & Logical 0:false 1:true");
    //relational
    printf("\nRelational operations: \n");
    printf("\na==b: %d",a==b);
    printf("\na!=b: %d",a!=b);
    printf("\na>b: %d",a>b);
    printf("\na<b: %d",a<b);
    printf("\na<=b: %d",a<=b);
    printf("\na>=b: %d\n",a>=b);

    //logical
    printf("\nLogical operations: \n");
    printf("\na&&b: %d",a&&b);
    printf("\na||b: %d",a||b);
    printf("\n!a: %d",!a);
    printf("\n!b: %d",!b);
    return 0;
}

#include<stdio.h>

struct Student
{
    int sid;
    char sname[50];
    double per;
};
void main()
{
    struct Student s1;   //s1 is a object and through the object we access structure
    printf("Enter student id: ");
    scanf("%d",&s1.sid);   //s1.sid . operator  is used to access the id or anything in structure
    printf("\nEnter student name: ");
    scanf("%s",&s1.name);
    printf("\nEnter percentage: ");
    scanf("%lf",&s1.per);
    
}

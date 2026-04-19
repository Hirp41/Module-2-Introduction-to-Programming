#include<stdio.h>

struct Student
{
    int sid;
    char sname[50];
    double per;
};
void showStudent(struct Student s)   //functipon is created for printing the date and in argument we have passed the struture
{
    printf("\nStudent id: %d",s.sid);
    printf("\nStudent name: %s",s.sname);
    printf("\nPercentage: %lf",s.per);
}
void main()
{
    struct Student s1;
    printf("Enter student id: ");
    scanf("%d",&s1.sid);
    printf("\nEnter student name: ");
    scanf("%s",&s1.sname);
    printf("\nEnter percentage: ");
    scanf("%lf",&s1.per);

    showStudent(s1);    //Called the function  by object s1
}

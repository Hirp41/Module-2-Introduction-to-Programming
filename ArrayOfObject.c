#include<stdio.h>

struct Student
{
    int sid;
    char sname[50];
    double per;
};
void showStudent(struct Student s)
{
    printf("\nStudent id: %d",s.sid);
    printf("\nStudent name: %s",s.sname);
    printf("\nPercentage: %lf",s.per);
}
void main()
{
    int i;
    struct Student s1[3];   //array of object
    for(i=0;i<3;i++)
    {
        printf("Enter student id: ");
        scanf("%d",&s1[i].sid);
        printf("\nEnter student name: ");
        scanf("%s",&s1[i].sname);
        printf("\nEnter percentage: ");
        scanf("%lf",&s1[i].per);
    }
    showStudent(s1[i]);
}


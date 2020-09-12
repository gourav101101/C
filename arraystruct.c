#include<stdio.h>
void main()
{
    struct student 
    {
        int roll;
        char name[10];
    };
    struct student s[3];
    int i;
    printf("Enter Student Detail :\n");
    for(i=0;i<3;i++)
    {
        printf("Enter student %d Roll & Name ",i+1);
        scanf("%d%s",&s[i].roll,s[i].name);
    }
    for(i=0;i<3;i++)
    {
        printf("\nRoll = %d & Name =%s",s[i].roll,s[i].name);
    }
}
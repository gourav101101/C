#include<stdio.h>
void main()
{
    struct student 
    {
        int roll;
        char name[10];
    };
    struct student s;
    printf("Enter Roll Number & Name : ");
    scanf("%d%s",&s.roll,s.name);
    printf("\nRoll = %d & Name = %s",s.roll,s.name);
    
}
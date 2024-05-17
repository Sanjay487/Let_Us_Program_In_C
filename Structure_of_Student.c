#include<stdio.h>
#define N 3
struct  Student
{
    int roll_no;
    char name[20];
    int clas_s;
    int marks[5];
}s[100];
int main()
{
    int i,j, total;
    float percentage;
    for (i = 0; i < N;i++)
    {
        printf("Enter the data for student %d:\n",i+1);
        printf("Enter the roll_no:");
        scanf("%d", &s[i].roll_no);
        printf("Enter Name:");
        scanf("%s",s[i].name);
        printf("Enter Class:");
        scanf("%d",&s[i].clas_s);
        printf("Enter Marks of five Subjects:\n");
        for ( j = 0; j < 5;j++)
            scanf("%d",&s[i].marks[j]);
    }

    for (i = 0; i < N;i++)
    {
        printf("\n\t\tDetails of Students!\t\t\t");
        printf("\nStudent %d:\n",i+1);
        printf("Roll NO:%d\nName:%s\nClass:%d\n", s[i].roll_no, s[i].name, s[i].clas_s);
        printf("Marks in Five Subjects:");
        total = 0;
        for (j = 0; j < 5;j++)
        {
            printf("%d\n",s[i].marks[j]);
            total += s[i].marks[j];
        }
        percentage = (float)total/5;
        printf("The percentage is %f", percentage);
    }
        return 0;
}

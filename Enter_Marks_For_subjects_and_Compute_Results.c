#include<stdio.h>
int main()
{   
    int n,full_marks=0;
    printf("Enter the number of subjects:");
    scanf("%d",&n);
    printf("Enter the total full marks of all subjects:");
    scanf("%d",&full_marks);
    int i, sum =0, marks[n];
    float percentage =0;
    for(i=0; i<n; i++)
    {
        printf("Enter marks for subject %d:",i+1);
        scanf("%d",&marks[i]);
    }
    for(i=0; i<n; i++)
    {
        sum +=marks[i];
    }
    percentage = (sum*100)/full_marks;
    printf("The sum of marks for %d subjects is:%d and percentage obtained is:%.4f ",n,sum,percentage);
    return 0;
}
#include<stdio.h>
int main()
{
    int rows;
    printf("This is Sixth pattern in C\n ");
    printf("Enter the rows upto which you want the Traingle:");
    scanf("%d",&rows);
    int n=1,i,j;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d\t",n++);
        }
        printf("\n");
    }
    return 0;
}

//OUTPUT for Floyd's Triangle.
// This is Sixth pattern in C
//  Enter the rows upto which you want the Traingle:5
// 1
// 2       3
// 4       5       6
// 7       8       9       10
// 11      12      13      14      15
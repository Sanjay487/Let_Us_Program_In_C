#include<stdio.h>
int main()
{
    int rows;
    printf("This is Seventh pattern in C\n ");
    printf("Enter the rows upto which you want the Traingle:");
    scanf("%d",&rows);
    int n=1,i,j;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        int count = 1;
        for (int k = 1; k <= i; k++) {
            printf("%d ", count);
            count = count * (i - k) / k;
        }
        printf("\n");
    }
    return 0;
}

//OUTPUT FOR PASCAL'S TRIANGLE:
// This is Seventh pattern in C
//  Enter the rows upto which you want the Traingle:5
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
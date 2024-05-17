#include<stdio.h>
int main()
{
    int rows,num=1,space,i,j,res,val;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for (i = 0; i < rows;i++)
    {
        for (space = 1; space <= rows - i;space++)
            printf(" ");
            for (j = 0; j <= i;j++)
            {
                res = num * num;
                printf("%4d", res);
                num += 1;
            }
            printf("\n");
    }
     return 0;
}

//Output
// Enter the number of rows:4
//        1
//       4   9
//     16  25  36
//    49  64  81 100
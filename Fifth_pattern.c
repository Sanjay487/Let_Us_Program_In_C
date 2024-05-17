#include<stdio.h>
int main()
{   
    printf("This is fifth pattern in C\n");
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=i; j<5; j++)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// OUTPUT
// This is fifth pattern in C
//     *
//    ***
//   *****
//  *******
// *********
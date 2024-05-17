#include<stdio.h>
int main()
{   
    printf("This is second design pattern in C");
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("$");
        }
        printf("\n");
    }
    for(i=0;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;

}
// OUTPUT
// $
// $$
// $$$
// $$$$
// $$$$$

// $
// $$
// $$$
// $$$$
// $$$$$
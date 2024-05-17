#include<stdio.h>
int main()
{   
    printf("This is first design pattern in C\n");
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
       
    }
    return 0;

}

// OUTPUT
// This is first design pattern in C
// 1
// 22
// 333
// 4444
// 55555
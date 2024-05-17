#include<stdio.h>
int main()
{   
    printf("This is first design pattern in C\n");
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
       
    }
    return 0;

}

// OUTPUT
// This is first design pattern in C
// 1
// 12
// 123
// 1234
// 12345
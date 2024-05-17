#include<stdio.h>
int main()
{
    printf("This is third design pattern in C\n");
    int i,j;
    i=5;
     for(i=5; i>=1; i--)
   
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    return 0;
}

// OUTPUT
// This is third design pattern in C
// 12345
// 1234
// 123
// 12
// 1
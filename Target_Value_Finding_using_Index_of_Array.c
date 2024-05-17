#include<stdio.h>
int main()
{
    int n,TV,i,j;
    printf("Enter the size of Array:");
    scanf("%d", &n);
    int num[n];
    printf("Enter the Target Value:");
    scanf("%d",&TV);
    for (i = 0; i < n;i++)
    {
        printf("Number[%d]:",i);
        scanf("%d",&num[i]);
    }

    for (i = 0; i < n;i++)
    {
        for (j = 0; j < n;j++)
        {
            if(num[i]+num[j]==TV && i<=j)
            {
                printf("The targeted value is %d and it's due to the sum of array of indexes of Number[%d] Number[%d].\n",TV, i, j);
            }
        }
    }

        return 0;
}

//Output
// Enter the size of Array:5
// Enter the Target Value:10
// Number[0]:1
// Number[1]:2
// Number[2]:3
// Number[3]:4
// Number[4]:5
// The targeted value is 10 and it's due to the sum of array of indexes of Number[4] Number[4].
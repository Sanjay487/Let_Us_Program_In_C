#include<stdio.h>
#include<math.h>
int main()
{   
    int start,limit,count,rem,num;
    start=2;
    printf("Enter the limiting value:");
    scanf("%d",&limit);
    printf("Prime numbers from %d to %d are:",start,limit);
    while (start<=limit)
    {
        num = sqrt(start);
        count = 2;
        rem = 1;
        while (count<=num)
        {
            if(start%count == 0)
            {
                rem = 0;
                break;
            }
            count++;
        }
        if(rem)
        printf("%d\t",start);
        start++;   
    }
    return 0;
}
//OUTPUT
// Enter the limiting value:122
// Prime numbers from 2 to 122 are:2       3       5       7       11      13      17      19      23      29      31      37      41  43       47      53      59      61      67      71      73      79      83      89      97      101     103     107     109     113
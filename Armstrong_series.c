#include<stdio.h>
#include<math.h>
int main()
{
    int n=1,temp,rem,sum;
    do
    {
        temp = n;
        sum = 0;
        while(temp)
        {
            rem = temp % 10;
            sum = sum + pow(rem,3);
            temp = temp / 10;
        }
        if(n == sum)
        {   
            printf("The armstrong series less than or equal to %dth term is:\n ",n);
            printf("%d is armstrong number.\n",n);
        }
        n++;
    } while (n <= 1000);
    return 0;
}

//OUTPUT
// The armstrong series less than or equal to 1th term is:
//  1 is armstrong number.
// The armstrong series less than or equal to 370th term is:
//  370 is armstrong number.
// The armstrong series less than or equal to 371th term is:
//  371 is armstrong number.
// The armstrong series less than or equal to 407th term is:
//  407 is armstrong number.
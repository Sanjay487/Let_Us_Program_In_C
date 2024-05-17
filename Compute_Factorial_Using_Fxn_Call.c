#include<stdio.h>
   long long int factorial(int num)
    {
        if (num == 0)
        {
            return 0;
        }
        if(num == 1 )
        {
            return 1;
        }
        else
        return (num*factorial(num-1));
    }

int main()
{
    int num;
    printf("Enter the number of which you want the factorial: ");
    scanf("%d",&num);
    long long int result = factorial(num);
    printf("The factorial of %d is %lld.",num,result);

 return 0;
}
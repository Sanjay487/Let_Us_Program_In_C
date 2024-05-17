#include<stdio.h>
int main()
{   
    int n;
    printf("Enter the space size of an array:");
    scanf("%d",&n);
    int array[n],i,j,temp;
    for(i=1; i<=n; i++)
    {
        printf("Enter the %d element :",i);
        scanf("%d",&array[i]);
    }
    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("The elements after sorting in array are:");
    for(i=1; i<=n; i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}
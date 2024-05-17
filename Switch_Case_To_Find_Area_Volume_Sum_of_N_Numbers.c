#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define PI 3.14

int main()
{
    int choice,length,breadth,height,number,sum,N;
    float radius,volume,area;
    printf("Press 1 to find Volume of Cylinder\n");
    printf("Press 2 to find Area of Rectangle\n");
    printf("Press 3 to find Sum of N Numbers\n");
    printf("Press 4 to Exit\n");
    while(1)
    {
        printf("\nEnter a choice:");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            printf("Enter the radius:");
            scanf("%f",&radius);
            printf("Enter the height:");
            scanf("%d",&height);
            volume = PI * radius * radius * height;
            printf("The volume of cylinder is %f cubic units.",volume);
            break;

            case 2:
            printf("Enter the Length:");
            scanf("%d",&length);
            printf("Enter the Breadth:");
            scanf("%d",&breadth);
            area = length * breadth;
            printf("The Area of Rectangle is %f square units.",area);
            break;

            case 3:
            sum = 0;
            printf("Enter the value of N:");
            scanf("%d",&N);
            printf("Enter %d numbers:\n",N);
            for (int i = 0; i < N;i++)
            {
                printf("Enter the number:");
                scanf("%d", &number);
                sum += number;
            }
            printf("Sum = %d.\n", sum);
            break;

            case 4:
            exit(0);
            default:
                printf("Wrong choice! Try Again.");
        }
    }
    return 0;
}
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 50
int main()
{   
    char name[MAX][MAX],temp[MAX];
    int n, i, j;
    printf("\n\nSorting strings using Bubble Sort.\n\n");
    printf("_____________________________________________________\n");
    printf("Input number of strings:");
    scanf("%d",&n);
    printf("Input String %d:\n",n);
    for(i=0; i<=n; i++)
    {
        fgets(name[i],sizeof(name),stdin);
    }
    for(i=1; i<=n; i++)
    for(j=0; j<=n-i; j++)
        if(strcmp(name[j],name[j+1])>0)
        {
            strcpy(temp,name[j]);
            strcpy(name[j],name[j+1]);
            strcpy(name[j+1],temp);
        }
        printf("\nThe strings after Sorting are:\n");
        for(i=0; i<=n; i++)
         printf("%s\n",name[i]);

    return 0;
}
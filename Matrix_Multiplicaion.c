#include<stdio.h>
#define MAX 10
int main()
{
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX], rows, columns, m, n, p, q, k;
    printf("Enter the Order of Matrix A:");
    scanf("%d%d", &m, &n);
    printf("Enter the Order of Matrix B:");
    scanf("%d%d", &p, &q);
    if(n!=p)
    printf("Matrix multiplicaion is not possible!");
    else
    printf("Enter the values of matrices:");
    printf("-------------------------------\n");
    printf("Matrix A:");
    for (rows = 0; rows < m;rows++){
        for (columns = 0; columns< n;columns++){
            printf("A[%d][%d]", rows, columns);
            scanf("%d",&a[rows][columns]);
        }
    }
      printf("Matrix B:");
    for (rows = 0; rows < p;rows++){
        for (columns = 0; columns<q;columns++){
            printf("B[%d][%d]:", rows, columns);
            scanf("%d",&b[rows][columns]);

        }
    }
    for (rows = 0; rows < m;rows++)
    {
        for (columns = 0; columns < q; columns++)
        {
            c[rows][columns] = 0;
            for (k = 0; k < n;k++)
            {
                c[rows][columns] = c[rows][columns] + a[rows][k] * b[k][columns];
            }
        }
    }
    printf("The Resultant Matrix is \n");
    for (rows = 0; rows < m;rows++)
    {
        for (columns = 0; columns < q;columns++)
        {
            printf("%d\t", c[rows][columns]);
        }
        printf("\n");
    }

        return 0;
}
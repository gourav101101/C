// gourav ji

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a[2][2], i, j, b[2][2], c[2][2], r1, r2, c1, c2, s, m;
    printf("Enter order of matrix A : ");
    scanf("%d%d", &r1, &c1);
    printf("Enter order of matrix B : ");
    scanf("%d%d", &r2, &c2);
    if (c1 != r2)
    {
        printf("Order of matrix is not same addition not possible ");
        exit(1);
    }
    printf("\nEnter element in matrix A : ");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
        {
            printf("\nEnter element A %d,%d location : ", i, j);
            scanf("%d", &a[i][j]);
        }
    printf("\nEnter element in matrix B : ");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
        {
            printf("\nEnter element B %d,%d location : ", i, j);
            scanf("%d", &b[i][j]);
        }
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
        {
            s = 0;
            for (m = 0; m < c1; m++)
                s = s + a[i][m] * b[m][j];
            c[i][j] = s;
        }
    printf("\nResult\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            printf("\t%d ", c[i][j]);
        printf("\n");
    }
}

#include <stdio.h>
#include <stdlib.h>

void printMatrix(int a, int matran[a][a])
{
    int i, j;
    for(i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            printf("%5d ", matran[i][j]);
        }
        if (i != a-1)
        {
            printf("\n");
        }
    }
}

int main()
{
    int i=0, j=0;
    int n;
    int x=1;
    int vong=0;
    printf("Nhap kich thuoc ma tran vuong: n = ");
    scanf("%d", &n);
    int matrix[n][n];
    while (x<=n*n)
    {
        for (j=vong; j<n-vong; j++)
        {
            matrix[vong][j] = x++;
        }
        for (i=vong+1; i<n-vong; i++)
        {
            matrix[i][n-vong-1] = x++;
        }
        for (j=n-vong-2; j>=vong; j--)
        {
            matrix[n-vong-1][j] = x++;
        }
        for (i=n-vong-2; i>vong; i--)
        {
            matrix[i][vong] = x++;
        }
        vong++;
    }
    printMatrix(n, matrix); printf(" voi n = %d", n);
    return 0;
}
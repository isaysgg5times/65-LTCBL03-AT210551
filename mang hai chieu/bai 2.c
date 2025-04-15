#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

void nhapmatran(int a[SIZE][SIZE],const char *ten)
{
    printf("Nhap ma tran %s (%dx%d):\n", ten, SIZE, SIZE);
    for (int i=0; i<SIZE; i++)
    {
        for (int j=0; j<SIZE; j++)
        {
            printf("%s[%d][%d] = ", ten, i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void inmatran(int a[SIZE][SIZE])
{
    for (int i=0; i<SIZE; i++)
    {
        for (int j=0; j<SIZE; j++)
        {
            printf("%4d  ",a[i][j]);
        }
        printf("\n");
    }
}
void tinhTongMaTran(int a[SIZE][SIZE], int b[SIZE][SIZE], int tong[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            tong[i][j] = a[i][j] + b[i][j];
}
int main()
{
    int a[SIZE][SIZE],b[SIZE][SIZE],tong[SIZE][SIZE];
    nhapmatran(a,"A");
    nhapmatran(b,"B");
    tinhTongMaTran(a,b,tong);
    printf("\nMa tran A:\n");
    inmatran(a);
    printf("\nMa tran B:\n");
    inmatran(b);
    printf("\nMa tran Tong (A + B):\n");
    inmatran(tong);
    return 0;
}

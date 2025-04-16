#include <stdio.h>

int main()
{
    int N;
    double S = 0.0;
    printf("Nhap so nguyen duong N: ");
    scanf("%d", &N);
    if (N <= 0)
    {
        printf("N phai lon hon 0!\n");
        return 1;
    }
    for (int i = 1; i <= N; i++)
    {
        S += 1.0 / i;
    }
    printf("Tong S = %.6lf\n", S);
    return 0;
}

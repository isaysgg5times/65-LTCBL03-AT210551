#include <stdio.h>

int main()
{
    int N;
    double S = 1.0;
    double giai_thua = 1.0;
    printf("Nhap so nguyen duong N: ");
    scanf("%d", &N);
    if (N < 0)
    {
        printf("N phai lon hon hoac bang 0!\n");
        return 1;
    }
    for (int i = 1; i <= N; i++)
    {
        giai_thua *= i;
        S += 1.0 / giai_thua;
    }
    printf("Tong S = %.6lf\n", S);
    return 0;
}


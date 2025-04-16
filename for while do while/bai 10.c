#include <stdio.h>

int main()
{
    int N;

    printf("Nhap so nguyen N: ");
    scanf("%d", &N);

    if (N < 0)
    {
        printf("N phai la so nguyen duong!\n");
        return 1;
    }

    if (N == 0)
    {
        printf("So Fibonacci thu %d la: 0\n", N);
        return 0;
    }
    if (N == 1)
    {
        printf("So Fibonacci thu %d la: 1\n", N);
        return 0;
    }
    long long fib1 = 0, fib2 = 1, fibN;
    for (int i = 2; i <= N; i++)
    {
        fibN = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibN;
    }


    printf("So Fibonacci thu %d la: %lld\n", N, fibN);

    return 0;
}

#include <stdio.h>

int main()
{
    int t;
    printf("Nhap so nguyen:");
    scanf("%d",&t);
    printf("Cac uoc cua %d la:",t);
    for (int i = 1; i <= t; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

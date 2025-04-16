#include <stdio.h>

void decimalToBinary(int num)
{
    int binary[32];
    int i = 0;

    if (num == 0)
    {
        printf("0");
        return;
    }

    while (num > 0)
    {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
}

int main()
{
    int n;

    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Vui long nhap so nguyen duong\n");
        return 1;
    }

    printf("He nhi phan (2): ");
    decimalToBinary(n);
    printf("\n");

    printf("He bat phan (8): %o\n", n);
    printf("He thap luc phan (16): %X\n", n);

    return 0;
}

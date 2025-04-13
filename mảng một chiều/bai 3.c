#include <stdio.h>
#include <stdlib.h>

void mang(int arr[], int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("So nguyen thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int tbc(int arr[], int t)
{
    int num = 0;
    for (int i = 0; i < t; i++)
    {
        num += arr[i];
    }
    return num / t;
}

int tbcd(int arr[], int t)
{
    int num = 0, duong = 0;
    for (int i = 0; i < t; i++)
    {
        if (arr[i] > 0)
        {
            num += arr[i];
            duong++;
        }
    }
    return (duong > 0) ? (num / duong) : 0;
}

int tongam(int arr[], int t)
{
    int num = 0, am = 0;
    for (int i = 0; i < t; i++)
    {
        if (arr[i] < 0)
        {
            num += arr[i];
            am++;
        }
    }
    return (am > 0) ? (num / am) : 0;
}

int main()
{
    int t;
    printf("Nhap so luong so nguyen: ");
    scanf("%d", &t);

    if (t <= 0)
    {
        printf("So luong phai lon hon 0.\n");
        return 1;
    }

    int arr[t];
    printf("Nhap so nguyen:\n");
    mang(arr, t);

    printf("Trung binh cong: %d\n", tbc(arr, t));
    printf("Trung binh cong duong: %d\n", tbcd(arr, t));
    printf("Trung binh cong am: %d\n", tongam(arr, t));

    return 0;
}

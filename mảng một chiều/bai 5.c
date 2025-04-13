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

int xuat(int arr[], int t, int x)
{
    int n = 0;
    for (int i = 0; i < t; i++)
    {
        if (arr[i] == x)
        {
            n++;
        }
    }
    return n;
}

int main()
{
    int t, x;
    printf("Nhap so luong phan tu trong mang\n");
    scanf("%d", &t);


    int arr[t];
    printf("Nhap mang:\n");
    mang(arr, t);

    printf("Nhap so muon tim: ");
    scanf("%d", &x);

    int count = xuat(arr, t, x);
    if (count > 0)
    {
        printf("So %d xuat hien %d lan trong mang.\n", x, count);
    }
    else
    {
        printf("So %d khong xuat hien trong mang.\n", x);
    }

    return 0;
}

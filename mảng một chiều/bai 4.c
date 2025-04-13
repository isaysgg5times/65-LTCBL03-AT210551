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

void timmax(int *arr, int t, int *pos, int *m)
{
    *m = arr[0];
    *pos = 0;

    for (int i = 1; i < t; i++)
    {
        if (arr[i] > *m)
        {
            *m = arr[i];
            *pos = i;
        }
    }
}

void timmin(int *arr, int t, int *pos, int *m)
{
    *m = arr[0];
    *pos = 0;

    for (int i = 1; i < t; i++)
    {
        if (arr[i] < *m)
        {
            *m = arr[i];
            *pos = i;
        }
    }
}

int main()
{
    int t, pos1, pos2, min, max;

    printf("Nhap so luong so nguyen: ");
    scanf("%d", &t);

    if (t <= 0)
    {
        printf("So luong phai lon hon 0.\n");
        return 1;
    }

    int arr[t];
    mang(arr, t);

    timmax(arr, t, &pos1, &max);
    timmin(arr, t, &pos2, &min);

    printf("Phan tu lon nhat: %d o vi tri %d\n", max, pos1);
    printf("Phan tu nho nhat: %d o vi tri %d\n", min, pos2);

    return 0;
}

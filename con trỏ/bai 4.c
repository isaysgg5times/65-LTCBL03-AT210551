#include <stdio.h>
#define SIZE 100

void nhapMang(int *arr, int n)
{
    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", arr + i);
    }
}
void inMang(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
void sapxep(int *arr, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i-1; j++)
        {
            if (*(arr+j) > *(arr+j+1))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("Nhap kich thuoc mang:");
    scanf("%d",&n);
    int arr[n];
    nhapMang(arr, n);
    printf("Mang vua nhap: ");
    inMang(arr, n);
    sapxep(arr,n);
    printf("Mang sau khi sap xep:");
    inMang(arr,n);
    return 0;
}

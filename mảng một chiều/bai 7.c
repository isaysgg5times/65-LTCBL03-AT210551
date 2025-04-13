#include <stdio.h>
#include <stdlib.h>

void sapxep(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {

                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    printf("Nhap kich thuoc mang:");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Nhap mang: \n");
    for(int i=0; i<n; i++)
    {
        printf("So thu %d:",i+1);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    printf("Mang goc: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    sapxep(arr,n);
    printf("Mang da sap xep: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

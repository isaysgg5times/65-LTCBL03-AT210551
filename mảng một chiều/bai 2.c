#include <stdio.h>
#include <stdlib.h>
void mang(int arr[])
{
    for (int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=10;i>0;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[9];
    printf("Nhap 10 so nguyen:");
    mang(arr);
    return 0;
}

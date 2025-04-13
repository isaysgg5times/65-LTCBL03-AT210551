#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10]={11,54,-39,321,132,83,-1,93,-21,01};
    printf("Mang goc:");
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        if(arr[i]<0)
        {
            arr[i]=0;
        }
    }
    printf("Chuyen tat ca cac so am thanh 0:");
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

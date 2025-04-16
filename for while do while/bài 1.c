#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,tong;

    for (int i=0;i<10;i++)
    {
        printf("Nhap so nguyen thu %d: ",i+1);
        scanf("%d",&x);
        tong += x;
    }
    printf("Tong 10 so nguyen = %d",tong);
    return 0;
}

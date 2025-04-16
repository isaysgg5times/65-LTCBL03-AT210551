#include <stdio.h>
#include <malloc.h>

int prime(int x) {
    if (x <= 1) {
        return 0;
    }
    if (x == 2) {
        return 1;
    }
    if (x % 2 == 0) {
        return 0;
    }
    for (int i = 3; i <= sqrt(x); i += 2) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
int main()
{
    int t;
    printf("Nhap so nguyen: ");
    scanf("%d",&t);
    if(prime(t))
    {
        printf("%d la so nguyen to",t);
    }
    else printf("%d khong phai so nguyen to",t);
    return 0;
}

#include <stdio.h>

int main() {
    int t, tong = 0;

    printf("Nhap so nguyen: ");
    scanf("%d", &t);
    for (int i = 1; i < t; i++) {
        if (t % i == 0) {
            tong += i;
        }
    }
    if (tong == t)
        printf("%d la so hoan hao\n", t);
    else
        printf("%d khong la so hoan hao\n", t);

    return 0;
}

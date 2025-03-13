#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("Sau khi hoan doi: a = %d, b = %d\n", a, b);
    return 0;
}

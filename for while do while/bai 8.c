#include <stdio.h>

int main() {
    int N;
    unsigned long long giai_thua = 1;
    printf("Nhap so nguyen duong N: ");
    scanf("%d", &N);
    if (N < 0) {
        printf("Khong tinh duoc giai thua cho so am!\n");
        return 1;
    }
    for (int i = 1; i <= N; i++) {
        giai_thua *= i;
    }

    printf("%d! = %llu\n", N, giai_thua);

    return 0;
}

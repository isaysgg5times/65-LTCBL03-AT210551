#include <stdio.h>

#define SIZE 3

void inMang(int arr[SIZE][SIZE]) {
    printf("Mang 3x3:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mang1[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("== TH1: Mang duoc khai bao san ==\n");
    inMang(mang1);
    int mang2[SIZE][SIZE];
    printf("\n== TH2: Nhap mang tu ban phim ==\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Nhap phan tu mang2[%d][%d]: ", i, j);
            scanf("%d", &mang2[i][j]);
        }
    }
    inMang(mang2);
    return 0;
}

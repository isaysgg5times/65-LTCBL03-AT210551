#include <stdio.h>

#define MAX 10

void nhapMaTran(int a[MAX][MAX], int hang, int cot, const char *ten) {
    printf("Nhap ma tran %s (%dx%d):\n", ten, hang, cot);
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%s[%d][%d] = ", ten, i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void inMaTran(int a[MAX][MAX], int hang, int cot, const char *ten) {
    printf("Ma tran %s:\n", ten);
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

void nhanMaTran(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int n, int m, int p) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int n, m, p;

    printf("Nhap so dong ma tran A (n): "); scanf("%d", &n);
    printf("Nhap so cot ma tran A / dong ma tran B (m): "); scanf("%d", &m);
    printf("Nhap so cot ma tran B (p): "); scanf("%d", &p);

    nhapMaTran(A, n, m, "A");
    nhapMaTran(B, m, p, "B");

    nhanMaTran(A, B, C, n, m, p);

    inMaTran(A, n, m, "A");
    inMaTran(B, m, p, "B");
    inMaTran(C, n, p, "C = A x B");

    return 0;
}

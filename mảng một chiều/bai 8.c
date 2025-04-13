#include <stdio.h>

void mergeArrays(int a[], int n, int b[], int m, int result[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            result[k++] = a[i++];
        }
        else
        {
            result[k++] = b[j++];
        }
    }
    while (i < n)
    {
        result[k++] = a[i++];
    }

    while (j < m)
    {
        result[k++] = b[j++];
    }
}

int main()
{
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    int result[n + m];

    mergeArrays(a, n, b, m, result);

    printf("Mang sau khi gop va giu thu tu tang dan:\n");
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

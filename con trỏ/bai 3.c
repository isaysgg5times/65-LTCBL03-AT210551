#include <stdio.h>
#define SIZE 10

void nhapMang(int *arr, int n) {
    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
}
void inMang(int *arr, int n) {
    printf("Mang vua nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
void max(int *arr,int n)
  {
    int *max = *arr;
    for(int i=0;i<n;i++)
    {
        if(*(arr+i)>= *max)
        {
            max = *(arr+i);
        }
    }
    printf("Max = %.3lf\n",max);
}
void min(int *arr,int n)
  {
    int *mim = *arr;
    for(int i=0;i<n;i++)
    {
        if(*(arr+i)<= *min)
        {
            *min = *(arr+i);
        }
    }
    printf("Min = %.3lf\n",mim);
}
int main() {
    int arr[SIZE];
    nhapMang(arr, SIZE);
    inMang(arr, SIZE);
    min(arr,SIZE);
    max(arr,SIZE);
    return 0;
}

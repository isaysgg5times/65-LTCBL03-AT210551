#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float p, chu_vi, dien_tich;

    // Nhap ba canh tam giac
    printf("Nhap do dai canh a: ");
    scanf("%f", &a);
    printf("Nhap do dai canh b: ");
    scanf("%f", &b);
    printf("Nhap do dai canh c: ");
    scanf("%f", &c);

    // Kiem tra co phai tam giac hay khong
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Ba so tao thanh mot tam giac.\n");

        // Xac dinh loai tam giac
        if (a == b && b == c)
        {
            printf("Tam giac deu.\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Tam giac can.\n");
        }
        else if ((a * a == b * b + c * c) ||
                 (b * b == a * a + c * c) ||
                 (c * c == a * a + b * b))
        {
            printf("Tam giac vuong.\n");
        }
        else
        {
            printf("Tam giac thuong.\n");
        }

        // Tinh chu vi va dien tich
        chu_vi = a + b + c;
        p = chu_vi / 2; // nua chu vi
        dien_tich = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("Chu vi tam giac: %.2f\n", chu_vi);
        printf("Dien tich tam giac: %.2f\n", dien_tich);
    }
    else
    {
        printf("Ba so khong tao thanh mot tam giac.\n");
    }

    return 0;
}

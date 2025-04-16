
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double eps, x, e=1.0;
    int i=1;
    long long k=1;

    printf("Nhap x:");
    scanf("%lf", &x);
    printf("Nhap eps:");
    scanf("%lf", &eps);

    do
    {
        k*=i;
        e=e+pow(x, i)/k;
        i++;
    } while (fabs(pow(x, i)/k)>=eps);
    printf("e^%f = %f\n", x, e);
    return 0;
}


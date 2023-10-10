#include <stdio.h>

int main()
{
    double a, b, i, j, x, y;
    double hasil;

    printf("Masukkan nilai a, b, i, j, x, dan y (secara berurutan): ");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &i, &j, &x, &y);

    hasil = ((a - b) * (i / j)) - (x + y);

    printf("%.3lf\n", hasil);

    return 0;
}

#include <stdio.h>

// Deklarasi fungsi
int MaxBilangan(int a, int b, int c, int d)
{
    int max = a;

    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }

    return max;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Panggil fungsi MaxBilangan dan simpan hasilnya di variabel 'hasil'
    int hasil = MaxBilangan(a, b, c, d);

    printf("%d", hasil);

    return 0;
}

#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2)
{
    return fabs(nilai1 - nilai2);
}

int mutlak(int angka)
{
    return (angka >= 0) ? angka : -angka;
}

int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    int Hasil = hitung(a, c) + hitung(b, d);
    printf("%d", mutlak(Hasil));

    return 0;
}

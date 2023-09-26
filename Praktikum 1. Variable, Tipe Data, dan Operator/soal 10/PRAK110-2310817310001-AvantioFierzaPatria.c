#include <stdio.h>
#include <math.h>

int main()
{

    double alas = 5.0;
    double tinggi = 12.0;

    double sisi_A = tinggi;
    double sisi_B = alas;
    double sisi_C = sqrt(alas * alas + tinggi * tinggi);

    double keliling = sisi_A + sisi_B + sisi_C;

    double luas = 0.5 * alas * tinggi;

    printf("Diketahui :\n");
    printf("Alas = %.2lf cm\n", alas);
    printf("Tinggi = %.2lf cm\n", tinggi);
    printf("\nJawab :\n");
    printf("Sisi A = %.2lf cm\n", sisi_A);
    printf("Sisi B = %.2lf cm\n", sisi_B);
    printf("Sisi C = %.2lf cm\n", sisi_C);
    printf("Keliling = %.2lf cm\n", keliling);
    printf("Luas = %.2lf cm\n", luas);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    // Mendeklarasikan variabel A, B, dan C
    double A, B, C;
    // Membaca input A dan B dari pengguna
    printf("Masukkan nilai A ? ");
    scanf("%lf", &A);
    printf("Masukkan nilai B ? ");
    scanf("%lf", &B);

    // Menghitung tinggi segitiga
    double tinggi = A;
    // Menghitung panjang sisi C menggunakan rumus Pythagoras
    C = sqrt(B * B - A * A);
    // Menghitung keliling segitiga
    double keliling = A + B + C;
    // Menghitung luas segitiga
    double luas = 0.5 * A * C;

    // Menampilkan hasil
    printf("Alas = %.0lf cm\n", C);
    printf("Tinggi = %.0lf cm\n", A);
    printf("Keliling = %.0lf cm\n", keliling);
    printf("Luas = %.0lf cm^2\n", luas);

    return 0;
}

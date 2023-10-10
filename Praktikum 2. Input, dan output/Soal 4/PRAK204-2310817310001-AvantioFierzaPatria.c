#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main()
{
    // Mendeklarasikan variabel jari-jari dan tinggi
    double jari_jari, tinggi;
    // Membaca input jari-jari dan tinggi dari pengguna
    printf("Masukkan jari-jari tabung: ");
    scanf("%lf", &jari_jari);
    printf("Masukkan tinggi tabung: ");
    scanf("%lf", &tinggi);

    // Menghitung volume tabung
    double volume = PI * pow(jari_jari, 2) * tinggi;
    // Menghitung luas permukaan tabung
    double luas_permukaan = 2 * PI * jari_jari * (jari_jari + tinggi);
    // Menghitung keliling alas tabung
    double keliling_alas = 2 * PI * jari_jari;

    // Menampilkan hasil dengan dua angka desimal
    printf("Volume = %.2lf\n", volume);
    printf("Luas = %.2lf\n", luas_permukaan);
    printf("Keliling = %.2lf\n", keliling_alas);

    return 0;
}

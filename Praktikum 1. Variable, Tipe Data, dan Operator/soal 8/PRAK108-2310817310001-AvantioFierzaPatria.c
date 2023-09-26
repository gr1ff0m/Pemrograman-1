#include <stdio.h>

int main()
{
    // Diketahui:
    int putaran = 5;
    double jarak_tempuh = 14.0;

    double jari_jari = jarak_tempuh / (2 * 3.141592653589793 * putaran);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.2lf Kilometer\n", jarak_tempuh);
    printf("\nJawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2lf Kilometer\n", jari_jari);

    return 0;
}
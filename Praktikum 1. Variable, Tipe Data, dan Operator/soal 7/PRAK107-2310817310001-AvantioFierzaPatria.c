#include <stdio.h>

int main()
{

    int sisi1 = 4;
    int sisi2 = 5;
    int sisi3 = 7;

    int keliling_tanah = sisi1 + sisi2 + sisi3;

    int harga_per_meter = 85000;

    int biaya = keliling_tanah * harga_per_meter;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling_tanah);
    printf("Harga tanah Per Meter adalah %d\n", harga_per_meter);
    printf("\nJawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", biaya);

    return 0;
}
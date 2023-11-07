
#include <stdio.h>

int main()
{
    int angka1, angka2;

    printf("Masukkan dua angka yang dipisahkan dengan spasi: ");
    scanf("%d %d", &angka1, &angka2);

    int batasan_awal, batasan_akhir, langkah, awal, akhir, i;
    char simbol = '-';

    batasan_awal = angka1;
    batasan_akhir = angka2;

    if (angka1 > angka2)
    {
        i = angka1 - angka2;
    }
    else
    {
        i = angka2 - angka1;
    }

    awal = 1;
    akhir = i + 1;
    printf("Angka yang bersilangan:\n");
    for (awal = 1; awal <= akhir; awal++)
    {
        printf("%d %d ", batasan_awal, batasan_akhir);

        if (angka1 > angka2)
        {
            batasan_awal -= 1;
            batasan_akhir += 1;
        }
        else
        {
            batasan_awal += 1;
            batasan_akhir -= 1;
        }
        if (awal != akhir)
        {
            printf("- ");
        }
    }
    printf("\n");
    return 0;
}

#include <stdio.h>

int main()
{
    // Mendeklarasikan variabel untuk menyimpan input pengguna
    int N1, N2, N3;

    // Meminta tiga input dari pengguna
    printf("Masukkan bilangan bulat pertama: ");
    scanf("%d", &N1);
    printf("Masukkan bilangan bulat kedua: ");
    scanf("%d", &N2);
    printf("Masukkan bilangan bulat ketiga: ");
    scanf("%d", &N3);

    // Memeriksa dan mencetak output untuk bilangan pertama
    if (N1 > 0)
    {
        printf("Positif\n");
    }
    else if (N1 < 0)
    {
        printf("Negatif\n");
    }
    else
    {
        printf("nol\n");
    }

    // Memeriksa dan mencetak output untuk bilangan kedua
    if (N2 > 0)
    {
        printf("Positif\n");
    }
    else if (N2 < 0)
    {
        printf("Negatif\n");
    }
    else
    {
        printf("nol\n");
    }

    // Memeriksa dan mencetak output untuk bilangan ketiga
    if (N3 > 0)
    {
        printf("Positif\n");
    }
    else if (N3 < 0)
    {
        printf("Negatif\n");
    }
    else
    {
        printf("nol\n");
    }

    return 0;
}

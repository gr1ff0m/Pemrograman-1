#include <stdio.h>

void Biodata(char nama[], char asal[], int tahunLahir)
{
    int tahun_sekarang = 2020;
    int umur = tahun_sekarang - tahunLahir;

    printf("Perkenalkan Nama Saya : %s\n", nama);
    printf("Umur Saya : %d tahun\n", umur);
    printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
    printf("Asal Saya dari : %s\n", asal);
}

int main()
{
    int tahunLahir;
    char Namaku[20], Asal[15];

    // Menerima input

    printf("Masukkan nama: ");
    scanf(" %[^\n]%*c", Namaku);

    printf("Masukkan asal: ");
    scanf(" %[^\n]%*c", Asal);

    printf("Masukkan tahun lahir: ");
    scanf("%d", &tahunLahir);

    // Memanggil fungsi Biodata
    Biodata(Namaku, Asal, tahunLahir);

    return 0;
}

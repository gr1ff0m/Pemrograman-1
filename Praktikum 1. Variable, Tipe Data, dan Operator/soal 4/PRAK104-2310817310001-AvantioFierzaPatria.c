#include <stdio.h>

int main()
{

    int harga_sepatu_A = 400000;
    int harga_sepatu_B = 350000;

    printf("Harga sepatu A adalah %d\n", harga_sepatu_A);
    printf("Harga sepatu B adalah %d\n", harga_sepatu_B);

    int diskon_A = 13;
    int harga_diskon_A = harga_sepatu_A - (harga_sepatu_A * diskon_A / 100);
    printf("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %d\n", diskon_A, harga_diskon_A);

    int diskon_B = 21;
    int harga_diskon_B = harga_sepatu_B - (harga_sepatu_B * diskon_B / 100);
    printf("Sepatu B mendapat diskon %d%% sehingga harganya menjadi %d\n", diskon_B, harga_diskon_B);

    return 0;
}
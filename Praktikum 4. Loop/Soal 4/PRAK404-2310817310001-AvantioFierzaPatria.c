#include <stdio.h>

int main()
{
    while (1)
    {
        int pilihan;
        float nilaiPertama, nilaiKedua, hasil;

        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 4)
        {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilaiPertama);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilaiKedua);

            if (pilihan == 1)
            {
                hasil = nilaiPertama + nilaiKedua;
                printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
            }
            else if (pilihan == 2)
            {
                hasil = nilaiPertama - nilaiKedua;
                printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
            }
            else if (pilihan == 3)
            {
                hasil = nilaiPertama * nilaiKedua;
                printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
            }
            else if (pilihan == 4)
            {
                if (nilaiKedua != 0)
                {
                    hasil = nilaiPertama / nilaiKedua;
                    printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
                }
                else
                {
                    printf("Error: Pembagian dengan nol tidak diizinkan.\n");
                }
            }
        }
        else if (pilihan == 5)
        {
            printf("Terimakasih, telah menggunakan kalkulator Anda\n");
            break;
        }
        else
        {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }

    return 0;
}

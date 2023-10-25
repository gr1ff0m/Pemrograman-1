#include <stdio.h>

// Fungsi untuk mengkonversi detik menjadi jam, menit, dan detik
void konversi_detik(int detik, int *jam, int *menit, int *detik_sisa)
{
    *jam = detik / 3600;
    int sisa_detik = detik % 3600;
    *menit = sisa_detik / 60;
    *detik_sisa = sisa_detik % 60;
}

int main()
{
    int inputs[5];

    // Membaca 5 input detik dari pengguna
    for (int i = 0; i < 5; i++)
    {
        printf("Input: ");
        scanf("%d", &inputs[i]);
    }

    // Mengkonversi detik dan menampilkan hasilnya
    for (int i = 0; i < 5; i++)
    {
        int jam, menit, detik;
        konversi_detik(inputs[i], &jam, &menit, &detik);

        if (jam >= 24)
        {
            int hari = jam / 24;
            jam %= 24;
            printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
        }
        else
        {
            printf("%02d:%02d:%02d\n", jam, menit, detik);
        }
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int jumlah_ruangan, i;

    printf("Masukkan jumlah ruangan: ");
    scanf("%d", &jumlah_ruangan);

    int jumlah_zetsu_putih[jumlah_ruangan];

    printf("Masukkan jumlah zetsu putih pada setiap ruangan (pisahkan dengan spasi): ");
    for (i = 0; i < jumlah_ruangan; i++)
    {
        scanf("%d", &jumlah_zetsu_putih[i]);
    }

    printf("Hasil:\n");
    for (i = 0; i < jumlah_ruangan; i++)
    {
        int jumlah_setelah_pembelahan = jumlah_zetsu_putih[i] * (i + 1);
        printf("Jumlah zetsu putih pada ruangan %d: %d\n", i + 1, jumlah_setelah_pembelahan);
    }

    return 0;
}

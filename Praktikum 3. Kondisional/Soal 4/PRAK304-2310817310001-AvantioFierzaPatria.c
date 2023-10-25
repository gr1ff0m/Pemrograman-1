#include <stdio.h>

void ejaan_cacah(int bilangan)
{
    if (bilangan == 0)
    {
        printf("nol\n");
    }
    else if (bilangan < 10)
    {
        printf("satuan\n");
    }
    else if (bilangan < 20)
    {
        printf("belasan\n");
    }
    else
    {
        printf("puluhan\n");
    }
}

int main()
{
    int jumlah_bilangan, bilangan;

    printf("Berapa kali input angka? : ");
    scanf("%d", &jumlah_bilangan);

    for (int i = 0; i < jumlah_bilangan; i++)
    {
        printf("Masukkan angka (1-100) : ");
        scanf("%d", &bilangan);
        if (bilangan >= 0 && bilangan < 100)
        {
            ejaan_cacah(bilangan);
        }
        else
        {
            printf("Anda Menginput Melebihi Limit Bilangan\n");
        }
    }

    return 0;
}

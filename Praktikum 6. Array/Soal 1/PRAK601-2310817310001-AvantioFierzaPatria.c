#include <stdio.h>

void buatMatriks()
{
    int baris, kolom;

    printf("Masukkan jumlah baris dan kolom (pisahkan dengan spasi): ");
    scanf("%d %d", &baris, &kolom);

    int matriks[baris][kolom];

    printf("Masukkan angka-angka dalam matriks:\n");
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            scanf("%d", &matriks[i][j]);
        }
    }

    printf("Matriks yang dibuat:\n");
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    buatMatriks();

    return 0;
}

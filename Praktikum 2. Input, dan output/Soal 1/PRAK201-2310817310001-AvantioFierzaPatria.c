#include <stdio.h>

int main()
{
    char nama[100], nim[20], kelas_paralel[10], tempat_lahir[50], tanggal_lahir[11], alamat[200], hobby[100], no_hp[15];

    printf("Nama : ");
    scanf("%s", nama);
    printf("NIM : ");
    scanf("%s", nim);
    printf("Kelas Paralel : ");
    scanf("%s", kelas_paralel);
    printf("Tempat Lahir : ");
    scanf("%s", tempat_lahir);
    printf("Tanggal Lahir (dd-mm-yyyy) : ");
    scanf("%s", tanggal_lahir);
    printf("Alamat : ");
    scanf("%s", alamat);
    printf("Hobby : ");
    scanf("%s", hobby);
    printf("No. HP : ");
    scanf("%s", no_hp);

    printf("Nama : %s\n", nama);
    printf("NIM : %s\n", nim);
    printf("Kelas Paralel : %s\n", kelas_paralel);
    printf("Tempat/Tanggal Lahir : %s/%s\n", tempat_lahir, tanggal_lahir);
    printf("Alamat : %s\n", alamat);
    printf("Hobby : %s\n", hobby);
    printf("No. HP : %s\n", no_hp);

    return 0;
}

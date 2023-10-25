#include <stdio.h>

char konversiNilai(int nilai)
{
    if (nilai >= 80)
    {
        return 'A';
    }
    else if (nilai >= 70 && nilai <= 79)
    {
        return 'B';
    }
    else if (nilai >= 60 && nilai <= 69)
    {
        return 'C';
    }
    else if (nilai >= 50 && nilai <= 59)
    {
        return 'D';
    }
    else
    {
        return 'E';
    }
}

int main()
{
    int nilai1, nilai2, nilai3, nilai4, nilai5;
    char hasil1, hasil2, hasil3, hasil4, hasil5;

    printf("Masukkan nilai pertama: ");
    scanf("%d", &nilai1);
    hasil1 = konversiNilai(nilai1);

    printf("Masukkan nilai kedua: ");
    scanf("%d", &nilai2);
    hasil2 = konversiNilai(nilai2);

    printf("Masukkan nilai ketiga: ");
    scanf("%d", &nilai3);
    hasil3 = konversiNilai(nilai3);

    printf("Masukkan nilai keempat: ");
    scanf("%d", &nilai4);
    hasil4 = konversiNilai(nilai4);

    printf("Masukkan nilai kelima: ");
    scanf("%d", &nilai5);
    hasil5 = konversiNilai(nilai5);

    printf("Hasil konversi nilai:\n");
    printf("Nilai pertama: %c\n", hasil1);
    printf("Nilai kedua: %c\n", hasil2);
    printf("Nilai ketiga: %c\n", hasil3);
    printf("Nilai keempat: %c\n", hasil4);
    printf("Nilai kelima: %c\n", hasil5);

    return 0;
}

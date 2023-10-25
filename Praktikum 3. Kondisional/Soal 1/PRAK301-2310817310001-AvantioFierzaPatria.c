#include <stdio.h>

int main()
{
    int angka1, angka2, angka3, angka4, angka5, angka6;

    printf("Masukkan dua angka terpisah oleh spasi: ");
    scanf("%d %d", &angka1, &angka2);

    printf("Masukkan dua angka terpisah oleh spasi: ");
    scanf("%d %d", &angka3, &angka4);

    printf("Masukkan dua angka terpisah oleh spasi: ");
    scanf("%d %d", &angka5, &angka6);

    if (angka1 > angka2)
    {
        int temp = angka1;
        angka1 = angka2;
        angka2 = temp;
    }
    if (angka3 > angka4)
    {
        int temp = angka3;
        angka3 = angka4;
        angka4 = temp;
    }
    if (angka5 > angka6)
    {
        int temp = angka5;
        angka5 = angka6;
        angka6 = temp;
    }

    printf("%d %d\n", angka1, angka2);
    printf("%d %d\n", angka3, angka4);
    printf("%d %d\n", angka5, angka6);

    return 0;
}

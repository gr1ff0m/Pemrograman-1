#include <stdio.h>

int main()
{
    int angka1, angka2;
    int i, j, total = 0;

    printf("Masukkan dua angka yang dipisahkan dengan spasi: ");
    scanf("%d %d", &angka1, &angka2);

    for (i = 1; i <= angka1; i++)
    {
        int temp = 0;
        for (j = i; j >= 1; j--)
        {
            temp += (j * angka2);
        }
        total += temp;
        if (i == 1)
        {
            printf("(%d * %d) = %d\n", i, angka2, temp);
        }
        else
        {

            for (j = i; j >= 1; j--)
            {
                printf("(%d * %d)", j, angka2);
                if (j > 1)
                {
                    printf(" + ");
                }
            }
            printf(" = %d\n", temp);
        }
    }

    printf("%d\n", total);

    return 0;
}

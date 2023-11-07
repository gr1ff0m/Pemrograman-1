#include <stdio.h>

int main()
{
    int batas_maksimal, i;

    printf("Masukkan batas maksimal bilangan: ");
    scanf("%d", &batas_maksimal);

    printf("Urutan bilangan ganjil: ");
    for (i = 1; i <= batas_maksimal; i += 2)
    {
        printf("%d ", i);
    }

      printf("\nUrutan bilangan genap: ");
    for (i = batas_maksimal; i >= 2; i -= 2)
    {
        if (i % 2 == 1)
        {
            i = i - 1;
        }
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}

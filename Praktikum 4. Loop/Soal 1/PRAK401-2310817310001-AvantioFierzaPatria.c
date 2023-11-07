#include <stdio.h>

int main()
{
    int bilangan_kelipatan;
    char simbol;
    scanf("%d %c", &bilangan_kelipatan, &simbol);

    int i;
    for (i = 1; i <= 50; i++)
    {
        if (i % bilangan_kelipatan == 0)
        {
            printf("%c ", simbol);
        }
        else
        {
            printf("%d ", i);
        }

        if (i % 20 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}

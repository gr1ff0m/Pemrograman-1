#include <stdio.h>

int main()
{

    int a = 4;
    int b = 8;
    int c = 3;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);

    float hasil = ((float)a * (float)b) / (float)c;

    printf("Hasil dari a dikali b dibagi c adalah %.6f\n", hasil);

    return 0;
}

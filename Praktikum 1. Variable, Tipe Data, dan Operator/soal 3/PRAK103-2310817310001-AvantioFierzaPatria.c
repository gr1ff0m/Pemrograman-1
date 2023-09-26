#include <stdio.h>

int main()
{

    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;

    printf("Variabel x bernilai %d\n", a);
    printf("Variabel y bernilai %d\n", b);
    printf("Variabel z bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);

    float hasil = ((float)(a + b) * x) / y;

    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", hasil);

    return 0;
}

#include <stdio.h>

int main()
{

    int jumlah_pasukan_yu_zhong = 958730;

    int jumlah_pahlawan = 5;

    int pasukan_per_pahlawan = jumlah_pasukan_yu_zhong / jumlah_pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", jumlah_pasukan_yu_zhong);
    printf("Jumlah pahlawan = %d\n", jumlah_pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukan_per_pahlawan);

    return 0;
}
#include <stdio.h>
#include <string.h>

void decodeMessage(char code[], char receivedMessage[], char decodedMessage[], int *starCount, int *hashCount)
{
    int length = strlen(code);
    *starCount = 0;
    *hashCount = 0;

    for (int i = 0; i < length; i++)
    {
        if (code[i] == receivedMessage[i])
        {
            decodedMessage[i] = '*';
            (*starCount)++;
        }
        else
        {
            decodedMessage[i] = '#';
            (*hashCount)++;
        }
    }

    decodedMessage[length] = '\0';
}

int main()
{
    char code[100], receivedMessage[100], decodedMessage[100];
    int starCount, hashCount;

    printf("Masukkan kode Shikamaru: ");
    scanf("%s", code);
    printf("Masukkan pesan yang diterima: ");
    scanf("%s", receivedMessage);

    decodeMessage(code, receivedMessage, decodedMessage, &starCount, &hashCount);

    printf("%s\n", decodedMessage);
    printf("Jumlah tanda bintang: %d\n", starCount);
    printf("Jumlah tanda pagar: %d\n", hashCount);

    if (starCount >= hashCount)
    {
        printf("Pesan asli\n");
    }
    else
    {
        printf("Pesan palsu\n");
    }

    return 0;
}

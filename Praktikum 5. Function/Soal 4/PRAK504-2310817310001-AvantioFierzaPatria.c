#include <stdio.h>

int reverse(int num)
{
    int reversedNum = 0;
    while (num > 0)
    {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return reversedNum;
}

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    A = reverse(A);
    B = reverse(B);

    int C = A + B;

    printf("%d", reverse(C));

    return 0;
}

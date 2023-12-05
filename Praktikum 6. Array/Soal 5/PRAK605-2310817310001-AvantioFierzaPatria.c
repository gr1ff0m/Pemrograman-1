#include <stdio.h>

void multiply_matrices(int n, int A[n][n], int B[n][n], int result[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void input_matrix(int n, int matrix[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix(int n, int matrix[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    int A[n][n], B[n][n], result[n][n];

    printf("Input matriks A:\n");
    input_matrix(n, A);

    printf("Input matriks B:\n");
    input_matrix(n, B);

    multiply_matrices(n, A, B, result);

    printf("Hasil perkalian matriks A dan B:\n");
    print_matrix(n, result);

    return 0;
}

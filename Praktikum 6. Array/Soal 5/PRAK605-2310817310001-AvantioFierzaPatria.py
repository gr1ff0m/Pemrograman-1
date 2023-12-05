def multiply_matrices(matrix_a, matrix_b):
    result = [[0 for _ in range(len(matrix_a))] for _ in range(len(matrix_a))]

    for i in range(len(matrix_a)):
        for j in range(len(matrix_a[0])):
            for k in range(len(matrix_b[0])):
                result[i][k] += matrix_a[i][j] * matrix_b[j][k]

    return result


def input_matrix():
    n = int(input())
    matrix = []

    for _ in range(n):
        row = list(map(int, input().split()))
        matrix.append(row)

    return matrix


def print_matrix(matrix):
    for row in matrix:
        print(" ".join(map(str, row)))


print("Input matriks A:")
matrix_a = input_matrix()

print("Input matriks B:")
matrix_b = input_matrix()

result_matrix = multiply_matrices(matrix_a, matrix_b)

print("Hasil perkalian matriks A dan B:")
print_matrix(result_matrix)

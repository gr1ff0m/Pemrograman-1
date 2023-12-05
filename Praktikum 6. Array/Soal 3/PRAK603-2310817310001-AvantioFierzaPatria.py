n1, n2 = map(int, input().split())

matrix1 = list(map(int, input().split()))

matrix2 = list(map(int, input().split()))

if n1 == n2:

    result = [matrix1[i] * matrix2[i] for i in range(n1)]
    print(*result)
else:

    print("jumlah tidak sama")

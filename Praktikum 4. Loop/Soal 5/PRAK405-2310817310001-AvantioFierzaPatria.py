angka1, angka2 = map(int, input(
    "Masukkan dua angka yang dipisahkan dengan spasi: ").split())
total = 0

for i in range(1, angka1 + 1):
    temp = 0
    for j in range(i, 0, -1):
        temp += j * angka2
    total += temp
    if i == 1:
        print(f"({i} * {angka2}) = {temp}")
    else:
        print("(", end="")
        for j in range(i, 0, -1):
            print(f"({j} * {angka2})", end="")
            if j > 1:
                print(" + ", end="")
        print(f") = {temp}")

print(total)

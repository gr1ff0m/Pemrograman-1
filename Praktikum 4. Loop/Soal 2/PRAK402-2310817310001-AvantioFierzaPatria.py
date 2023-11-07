batas_maksimal = int(input("Masukkan batas maksimal bilangan: "))

print("Urutan bilangan ganjil:", end=" ")
for i in range(1, batas_maksimal + 1, 2):
    print(i, end=" ")

print("\nUrutan bilangan genap:", end=" ")
i = batas_maksimal
while i >= 2:
    if i % 2 == 1:
        i -= 1
    print(i, end=" ")
    i -= 2

print()

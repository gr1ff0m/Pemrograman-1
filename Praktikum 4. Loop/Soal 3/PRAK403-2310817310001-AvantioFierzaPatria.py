angka1, angka2 = map(int, input(
    "Masukkan dua angka yang dipisahkan dengan spasi: ").split())

batasan_awal, batasan_akhir = angka1, angka2

if angka1 > angka2:
    i = angka1 - angka2
else:
    i = angka2 - angka1

awal, akhir = 1, i + 1
print("Angka yang bersilangan:")
for _ in range(awal, akhir + 1):
    print(batasan_awal, batasan_akhir, end=' ')

    if angka1 > angka2:
        batasan_awal -= 1
        batasan_akhir += 1
    else:
        batasan_awal += 1
        batasan_akhir -= 1

    if awal != akhir:
        print("- ", end=' ')

print()

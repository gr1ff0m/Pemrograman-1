def max_bilangan(a, b, c, d):
    max_val = a

    if b > max_val:
        max_val = b
    if c > max_val:
        max_val = c
    if d > max_val:
        max_val = d

    return max_val


# Input dari pengguna
a, b, c, d = map(int, input().split())

# Panggil fungsi max_bilangan dan simpan hasilnya di variabel 'hasil'
hasil = max_bilangan(a, b, c, d)

# Cetak hasil
print(hasil)

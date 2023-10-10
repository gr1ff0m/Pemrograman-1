import math

# Membaca input A dan B dari pengguna
A, B = map(int, input("Masukkan nilai A dan B (pisahkan dengan spasi): ").split())

# Tinggi sama dengan salah satu sisi yang diketahui (A atau B)
tinggi = A
# Menghitung alas (C) menggunakan teorema Pythagoras
C = math.sqrt(B**2-A**2)
# Menghitung keliling
keliling = A + B + C
# Menghitung luas
luas = 0.5 * A * C

# Menampilkan hasil
print("Alas = {:.0f} cm".format(C))
print("Tinggi = {} cm".format(tinggi))
print("Keliling = {:.0f} cm".format(keliling))
print("Luas = {:.0f} cm^2".format(luas))

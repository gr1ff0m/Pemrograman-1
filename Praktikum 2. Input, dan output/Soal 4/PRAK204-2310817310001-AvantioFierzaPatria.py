import math

# Membaca input jari-jari dan tinggi dari pengguna
jari_jari = float(input("Masukkan jari-jari tabung: "))
tinggi = float(input("Masukkan tinggi tabung: "))

# Menghitung volume tabung
volume = math.pi * pow(jari_jari, 2) * tinggi
# Menghitung luas permukaan tabung
luas_permukaan = 2 * math.pi * jari_jari * (jari_jari + tinggi)
# Menghitung keliling alas tabung
keliling_alas = 2 * math.pi * jari_jari

# Menampilkan hasil dengan dua angka desimal
print("Volume = {:.2f}".format(volume))
print("Luas = {:.2f}".format(luas_permukaan))
print("Keliling = {:.2f}".format(keliling_alas))

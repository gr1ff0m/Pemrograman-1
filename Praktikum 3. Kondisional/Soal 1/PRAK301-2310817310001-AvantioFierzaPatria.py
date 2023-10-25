# Membaca input dari pengguna
input1 = input("Masukkan dua angka terpisah oleh spasi: ").split()
input2 = input("Masukkan dua angka terpisah oleh spasi: ").split()
input3 = input("Masukkan dua angka terpisah oleh spasi: ").split()

# Mengonversi input ke dalam bentuk integer
angka1 = int(input1[0])
angka2 = int(input1[1])
angka3 = int(input2[0])
angka4 = int(input2[1])
angka5 = int(input3[0])
angka6 = int(input3[1])

# Mengurutkan angka menggunakan metode kondisional
if angka1 > angka2:
    angka1, angka2 = angka2, angka1
if angka3 > angka4:
    angka3, angka4 = angka4, angka3
if angka5 > angka6:
    angka5, angka6 = angka6, angka5

# Menampilkan hasil pengurutan
print(angka1, angka2)
print(angka3, angka4)
print(angka5, angka6)

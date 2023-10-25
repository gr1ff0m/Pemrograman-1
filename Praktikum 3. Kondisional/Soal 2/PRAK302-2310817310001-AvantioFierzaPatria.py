def konversi_nilai(nilai):
    if nilai >= 80:
        return 'A'
    elif 70 <= nilai <= 79:
        return 'B'
    elif 60 <= nilai <= 69:
        return 'C'
    elif 50 <= nilai <= 59:
        return 'D'
    else:
        return 'E'

# Input nilai
nilai1 = int(input("Masukkan nilai pertama: "))
nilai2 = int(input("Masukkan nilai kedua: "))
nilai3 = int(input("Masukkan nilai ketiga: "))
nilai4 = int(input("Masukkan nilai keempat: "))
nilai5 = int(input("Masukkan nilai kelima: "))

# Konversi nilai
hasil1 = konversi_nilai(nilai1)
hasil2 = konversi_nilai(nilai2)
hasil3 = konversi_nilai(nilai3)
hasil4 = konversi_nilai(nilai4)
hasil5 = konversi_nilai(nilai5)

# Output hasil
print("Hasil konversi nilai:")
print(f"Nilai pertama: {hasil1}")
print(f"Nilai kedua: {hasil2}")
print(f"Nilai ketiga: {hasil3}")
print(f"Nilai keempat: {hasil4}")
print(f"Nilai kelima: {hasil5}")

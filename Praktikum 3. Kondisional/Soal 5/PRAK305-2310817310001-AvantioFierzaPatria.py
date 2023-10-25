# Fungsi untuk mengkonversi detik menjadi jam, menit, dan detik
def konversi_detik(detik):
    jam = detik // 3600
    sisa_detik = detik % 3600
    menit = sisa_detik // 60
    detik = sisa_detik % 60
    return jam, menit, detik

# Membaca 5 input detik dari pengguna
inputs = []
for i in range(5):
    detik = int(input("Input: "))
    inputs.append(detik)

# Mengkonversi detik dan menampilkan hasilnya
for detik in inputs:
    jam, menit, detik = konversi_detik(detik)
    if jam >= 24:
        hari = jam // 24
        jam %= 24
        print(f"{hari} hari {jam:02}:{menit:02}:{detik:02}")
    else:
        print(f"{jam:02}:{menit:02}:{detik:02}")

def hitung_jumlah_zetsu_putih(jumlah_ruangan, jumlah_zetsu_putih):
    hasil = []
    for i in range(jumlah_ruangan):
        jumlah_setelah_pembelahan = jumlah_zetsu_putih[i] * (i + 1)
        hasil.append(jumlah_setelah_pembelahan)
    return hasil


jumlah_ruangan = int(input("Masukkan jumlah ruangan: "))

jumlah_zetsu_putih = list(map(int, input(
    "Masukkan jumlah zetsu putih pada setiap ruangan (pisahkan dengan spasi): ").split()))

hasil = hitung_jumlah_zetsu_putih(jumlah_ruangan, jumlah_zetsu_putih)

for i in range(jumlah_ruangan):
    print(f"Jumlah zetsu putih pada ruangan {i+1}: {hasil[i]}")

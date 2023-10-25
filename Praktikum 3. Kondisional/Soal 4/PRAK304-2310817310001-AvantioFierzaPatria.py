def ejaan_cacah(bilangan):
    
    if bilangan == 0:
        print("nol")
    elif bilangan < 10:
        print("satuan")
    elif bilangan < 20:
        print("belasan")
    else:
        print("puluhan")

# Membaca input dari pengguna
jumlah_bilangan = int(input("Berapa kali input angka ? : "))

# Membaca bilangan cacah dan mengonversinya ke ejaan
for _ in range(jumlah_bilangan):
    bilangan = int(input("Masukkan angka (1-100) : "))
    if bilangan >= 0 and bilangan < 100:
         ejaan_cacah(bilangan)
    else:
        print("Anda Menginput Melebihi Limit Bilangan")

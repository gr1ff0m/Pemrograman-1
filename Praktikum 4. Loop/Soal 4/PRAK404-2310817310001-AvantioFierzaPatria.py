while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    pilihan = input("Masukkan Pilihan : ")

    if pilihan in ['1', '2', '3', '4']:
        nilai_pertama = float(input("Masukkan nilai pertama : "))
        nilai_kedua = float(input("Masukkan nilai kedua : "))

        if pilihan == '1':
            hasil = nilai_pertama + nilai_kedua
            operasi = "Penjumlahan"
        elif pilihan == '2':
            hasil = nilai_pertama - nilai_kedua
            operasi = "Pengurangan"
        elif pilihan == '3':
            hasil = nilai_pertama * nilai_kedua
            operasi = "Perkalian"
        elif pilihan == '4':
            if nilai_kedua != 0:
                hasil = nilai_pertama / nilai_kedua
                operasi = "Pembagian"
            else:
                print("Error: Pembagian dengan nol tidak diizinkan.")
                continue

        print(
            f"Hasil {operasi} antara {nilai_pertama} dengan {nilai_kedua} adalah {hasil}\n")

    elif pilihan == '5':
        print(f"Terimakasih, telah menggunakan kalkulator Avantio")
        break

    else:
        print("Input anda salah, silahkan coba lagi\n")

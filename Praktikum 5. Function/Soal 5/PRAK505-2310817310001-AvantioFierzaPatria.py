def biodata(nama, asal, tahun_lahir):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahun_lahir

    print(f"Perkenalkan Nama Saya : {nama}")
    print(f"Umur Saya : {umur} tahun")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya dari : {asal}")
    print(f"Tahun Lahir : {tahun_lahir}")


def main():
    nama = input("Masukkan nama: ")
    asal = input("Masukkan asal: ")
    tahun_lahir = int(input("Masukkan tahun lahir: "))

    # Memanggil fungsi biodata
    biodata(nama, asal, tahun_lahir)


if __name__ == "__main__":
    main()

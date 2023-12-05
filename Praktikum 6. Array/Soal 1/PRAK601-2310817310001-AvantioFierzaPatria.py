def buat_matriks():

    baris, kolom = map(int, input(
        "Masukkan jumlah baris dan kolom (pisahkan dengan spasi): ").split())
    angka_matriks = list(map(int, input(
        "Masukkan angka-angka dalam matriks (pisahkan dengan spasi): ").split()))

    if len(angka_matriks) != baris * kolom:
        print("Jumlah angka tidak sesuai dengan baris dan kolom yang ditetapkan.")
        return None

    matriks = [angka_matriks[i:i + kolom]
               for i in range(0, len(angka_matriks), kolom)]

    print("Matriks yang dibuat:")
    for baris_matriks in matriks:
        print(baris_matriks)

    return matriks


matriks_midoriya = buat_matriks()

def hitung(nilai1, nilai2):
    return abs(nilai1 - nilai2)


def mutlak(angka):
    return angka if angka >= 0 else -angka


a = int(input())
b = int(input())
c = int(input())
d = int(input())

Hasil = hitung(a, c) + hitung(b, d)
print(mutlak(Hasil))

a, b, i, j, x, y = map(float, input("Masukkan nilai a, b, i, j, x, dan y (secara berurutan): ").split())

hasil = ((a - b) * (i / j)) - (x + y)

print("{:.3f}".format(hasil))

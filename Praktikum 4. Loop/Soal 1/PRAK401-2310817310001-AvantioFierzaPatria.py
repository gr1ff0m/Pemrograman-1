bilangan_kelipatan, simbol = input().split()
bilangan_kelipatan = int(bilangan_kelipatan)

output = []
for i in range(1, 51):
    if i % bilangan_kelipatan == 0:
        output.append(simbol)
    else:
        output.append(str(i))

for i in range(0, 50, 20):
    print(" ".join(output[i:i+20]))

def maksimal(a, b):
    return max(a, b)


def minimal(a, b):
    return min(a, b)


bilangan = int(input())
nilai = list(map(int, input().split()))

maks = float('-inf')
minim = float('inf')

for nilai in nilai:
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)

print(f"{maks} {minim}")

def reverse(num):
    reversed_num = 0
    while num > 0:
        reversed_num = reversed_num * 10 + num % 10
        num //= 10
    return reversed_num


A, B = map(int, input().split())

A_reversed = reverse(A)
B_reversed = reverse(B)

C = A_reversed + B_reversed

print(reverse(C))

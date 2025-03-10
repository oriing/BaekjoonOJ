n = int(input())
a, b = 0, 1
for i in range(1, n):
    t = b
    b += a
    a = t

if n==0: print(a)
else: print(b)

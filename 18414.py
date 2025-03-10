x, a, b = map(int, input().split())
t = b
for i in range(a, b):
    if abs(x-t) > abs(x-i):
        t = i
print(t)

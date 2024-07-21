n = int(input())

s = sum(range(1, n+1))
print(s)
print(s**2)
s = sum((i**3 for i in range(1, n+1)))
print(s)

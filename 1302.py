n = int(input())
d = {}

for _ in range(n):
    t = input()
    d.setdefault(t, 0)
    d[t] += 1

s = ('', -1)

for a, b in d.items():
    if b > s[1] or (b == s[1] and a < s[0]):
        s = (a, b)

print(s[0])

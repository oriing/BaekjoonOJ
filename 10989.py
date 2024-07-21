d = {}

for i in range(int(input())):
    n = int(input())
    d.setdefault(n, 0)
    d[n] += 1

for i in sorted(d):
    for _ in range(d[i]):
        print(i)

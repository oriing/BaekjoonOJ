l, r, u, d = 1000000000, -1000000, -100000000, 100000000000
for _ in range(int(input())):
    x, y = map(int,input().split())
    l = min(l, x)
    r = max(r, x)
    u = max(u, y)
    d = min(d, y)
print((r-l)*(u-d))

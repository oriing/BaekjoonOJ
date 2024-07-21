h, y = map(int,input().split())
d = [0]*20
d[0] = h

for i in range(1, y+1):
    d[i] = int(d[i-1]*1.05)
    if i>=3:
        d[i] = max(int(d[i-3]*1.20), d[i])
    if i>=5:
        d[i] = max(int(d[i-5]*1.35), d[i])
print(d[y])

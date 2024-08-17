d=(input() for _ in range(5))
m=max(map(len,d))
for x in range(m):
    for y in d:
        print(y[x:x+1])

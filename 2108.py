d = [int(input()) for i in range(int(input()))]

avg = sum(d)/len(d)
if avg>=0:
    print(int(avg+0.5))
else:
    print(int(avg-0.5))

d.sort()
print(d[len(d)//2])

k = {}
for i in d:
    k.setdefault(i, 0)
    k[i] += 1
ks = sorted(k.items(), key = lambda x: (-x[1], x[0]))
if len(ks)>1 and ks[0][1] == ks[1][1]:
    print(ks[1][0])
else:
    print(ks[0][0])

print(d[-1]-d[0])

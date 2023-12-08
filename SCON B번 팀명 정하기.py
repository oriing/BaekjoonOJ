p=[0]*3
for _ in range(3):
    p[_] = list(input().split())
    p[_][0] = int(p[_][0])
    p[_][1] = int(p[_][1])
a=[]
for i in range(3):
    a.append(p[i][1]%100)
a.sort()
a = tuple(map(str, a))
print(''.join(a))

t = sorted(p, key=lambda x: -x[0])
ans = ""
for i in range(3):
    ans += t[i][2][0]
print(ans)

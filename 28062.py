input()
s=map(int,input().split())
k, d = [], []
for i in s:
    if i%2: k.append(i)
    else: d.append(i)
k=sorted(k)
if len(k)%2: del k[0]
print(sum(k)+sum(d))

s, e = map(int,input().split())

d = [1]*(e-s+1)

x = 1
for i in range(3, e, 2):
    x += i
    if x > e:
        break
    k = x*(s//x)
    if k<s:
        k += x
    while k<=e:
        d[k-s] = 0
        k += x
    

print(sum(d))

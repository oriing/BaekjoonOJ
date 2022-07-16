def ina(x, a, l, r):
    m=(l+r)//2
    if x==a[m]:
        return True
    elif l>=r:
        return False
    elif x<a[m]:
        return ina(x, a, l, m-1)
    else:
        return ina(x, a, m+1, r)

n, m=input().split()
n, m=int(n), int(m)
a=[]
b=[]
for i in range(n):
    a.append(input())
a.sort()
le=len(a)-1
for j in range(m):
    im=input()
    if ina(im, a, 0, le):
        b.append(im)
b.sort()
print(len(b))
for i in b:
    print(i)

import sys
input=sys.stdin.readline

d=[-1 for i in range(10)]
ans=[]

def gos(n, m, c):
    for ii in range(1, n+1):
        d[c]=ii-1
        ch=0
        for j in range(1, c):
            if d[j]==ii-1:
                ch=1
                break
        if (ch):
            continue
        if (m==c):
            temp=[]
            for j in d:
                temp.append(dn[j])
            ans.append(temp)
        else:
            gos(n, m, c+1)

n, m=map(int, input().split())
dn=list(map(int, input().split()))
dn.sort()
gos(n, m, 1)
ans.sort()
for i in range(len(ans)):
    if (i>0 and ans[i]==ans[i-1]):
        continue
    for j in range(1, m+1):
        print(str(ans[i][j])+' ', end='')
    print()

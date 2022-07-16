from itertools import combinations

s=list(input())

l=[]
r=[]

for i in range(len(s)):
    if s[i]=='(':
        l.append(i)
        s[i]=''
    elif s[i]==')':
        r.append((i, l.pop()))
        s[i]=''

l=tuple(l)
r=tuple(r)

ans=set()
n=len(r)

for i in range(n):
    for j in combinations(r, i):
        e=s+[]
        for a, b in j:
            e[a]=')'
            e[b]='('
        ans.add(''.join(e))
print(*sorted(ans), sep='\n')

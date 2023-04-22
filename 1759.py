from itertools import combinations as comb

a, b = map(int,input().split())
l=tuple(sorted(input().split()))

aeiou=[]
el=[]
for i in l:
    if i in ('a', 'e', 'i', 'o', 'u'):
        aeiou.append(i)
    else:
        el.append(i)

ans=[]

for i in range(1, min(a-2, len(aeiou))+1):
    j=a-i

    sa=tuple(comb(aeiou, i))
    sb=tuple(comb(el, j))
    for ta in sa:
        for tb in sb:
            for x in comb(ta+tb, a):
                ans.append(''.join(sorted(x)))
ans.sort()
for i in ans:
    print(i)
        

a=input().split('-')

ans=0

if len(a)==1:
    for j in a[0].split('+'):
        ans+=int(j)
else:
    
    for i in range(len(a)):
        if i==0:
            for j in a[i].split('+'):
                ans+=int(j)
        else:
            b=a[i].split('+')
            for j in b:
                ans-=int(j)
print(ans)

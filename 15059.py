a,b=[list(map(int,input().split())) for i in (1,2)]
print(sum([b[i]-a[i] if a[i]-b[i]<0 else 0 for i in (0,1,2)]))

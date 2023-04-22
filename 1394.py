s=input()
e=input()
ans=0
ns=len(s)
ne=len(e)
def sums(a):
    global ans
    ans+=a
    ans%=900528
    #print(ans)
temp=ns
for i in range(1, ne):
    sums(ns)
    temp*=ns
    if(temp>900528):
        temp%=900528
temp=1

for i in range(1, ne+1):
    sums(s.index(e[ne-i])*(temp))
    temp*=ns
    if(temp>900528):
        temp%=900528
    
sums(1)
print(ans)


import sys
from collections import deque
input=sys.stdin.readline

def Sum(n):
    if n<=0:
        return 0
    return Sum(n//10)+n%10

def Prod(n):
    ans=1
    for i in tuple(map(int,str(n))):
        ans*=i
    return ans
    
def Prod3(n):
    if n<1000:
        return Prod(n)
    p=sorted(tuple(map(int,str(n))))[-3:]
    ans=1
    for i in p:
        ans*=i
    return ans

def Smallest(n):
    ans=10
    for i in tuple(map(int,str(n))):
        if ans>i:
            ans=i
    return ans

def Gol(X, Y):
    return 5*Prod3(X) + int(str(X)[0]) * Sum(Y) + Smallest(Y)


dp=[]

def check(x, l, r):
    if l>r:
        return False
    m=(l+r)//2
    if dp[m]:
        return True
    if dp[m]<x:
        return check(x, l, m-1)
    return check(x, m+1, r)

def inpos(x, l, r, ml, mr):
    m=(l+r)//2
    if dp[m]==x:
        return
    if dp[m]<x:
        if m<mr:
            if dp[m+1]>x:
                dp.insert(m, x)
                return
            else:
                inpos(x, l, m-1, ml, mr)
                return
        else:
            dp.insert(m, x)
            return
    inpos(x, m+1, r, ml, mr)

s, e=map(int,input().split())

q=deque([])	
q.append((s, 0))

find=True
while len(q)>0:
    n, t = q.popleft()
    if n==e:
        print(t)
        find=False
        break
    ima=Gol(n, s)

if find:
    print(-1)

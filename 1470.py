import sys
input=sys.stdin.readline

n, l = map(int,input().split())
t = []
f=list(map(int,input().split()))

if n==1:
    print(1)
else:
    for _ in range(n-1):
        t.append(list(map(int,input().split())))

    t.sort(reverse=True)

    f[0]+=l
    tp=0
    t1=[]
    for _ in range(n-1):
        if t[_][0]>f[0]:
            tp=_
        if t[_][0]==f[0]:
            t1.append(t[_])
        if t[_][0]<f[0]:
            break
    
    for _ in range(len(t1)):
        needl = f[1] - t1[_][1]
        needl2 = f[2] - t1[_][2]
        tf = 0
        if t1[_][2]>f[2]:
            tf = 1
        t1[_] = [needl, tf, needl2]
    t1.sort()

    l1=l
    l2=l
    for _ in range(len(t1)):
        needl1=t1[_][0]
        needl2=t1[_][1]
        if needl<=0:
            tp+=1
            continue
        
    
    print(tp+1)

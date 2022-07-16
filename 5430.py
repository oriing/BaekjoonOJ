import sys
input = sys.stdin.readline

for i in range(int(input())):
    g=input().rstrip().replace('RR','')
    n=int(input())
    d=eval(input())
    imsi=g.count('D')
    if imsi>n:
        print('error')
        continue
    if imsi==n:
        print('[]')
        continue

    di=0
    lr=[0, n]
    
    for now in g:
        if now=='R':
            di=(di+1)%2
        elif now=='D':
            lr[di]+=1-2*di
    d=d[lr[0]:lr[1]]
    print(str(d[::1-2*di]).replace(' ',''))

import sys
input=sys.stdin.readline

for _ in range(int(input())):
    n=int(input())
    d={}
    for i in range(n):
        tmp=input().split()
        if tmp[1] not in d.keys():
            d[tmp[1]]=0
        d[tmp[1]]+=1
    s=1
    for i in d.keys():
        s*=d[i]+1
    print(s-1)

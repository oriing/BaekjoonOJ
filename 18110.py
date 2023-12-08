import sys
input = sys.stdin.readline

def rnd(n):
    if(n>0):
        return int(n+0.5)
    return int(n-0.5)

d = []
n = int(input())

if n==0:
    print(0)

else:
    for _ in range(n):
        d.append(int(input()))

    d.sort()
    p = d[rnd(n * 0.15) : n - rnd(n * 0.15)]
    print(rnd(sum(p)/len(p)))

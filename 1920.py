import sys
input = sys.stdin.readline

n1 = int(input())-1
d1 = set(sorted(map(int,input().split())))
n2 = int(input())
d2 = list(map(int,input().split()))

def find(i, l, r):
    global d1
    m = (l+r)//2
    #print(m, i, l, r)
    if l>r:
        return 0
    if d1[m]==i:
        return 1
    if d1[m]>i:
        return find(i, l, m-1)
    else:
        return find(i, m+1, r)
    

for i in d2:
    print(int(i in d1))

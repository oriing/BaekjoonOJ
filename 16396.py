import sys
input=sys.stdin.readline
a=[0]*10001
n=int(input())
for i in range(n):
    x, y = map(int, input().split())
    for j in range(x, y):
        a[j]=1
print(sum(a))

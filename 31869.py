import sys
input = sys.stdin.readline

n = int(input())

udata = {}
for _ in range(n):
    a, *b = input().split()
    *b, = map(int,b)
    udata[a] = b

ydata = [0]*110
for _ in range(n):
    a, b = input().split()
    b = int(b)
    we, da, va = udata[a]
    if b >= va:
        ydata[we*7+da] = 1

now = 0
ans = 0
for i in range(110):
    if ydata[i]:
        now += 1
        ans = max(ans, now)
    else:
        now = 0

print(ans)

N, K = map(int,input().split())

nowvalue = 0

for i in range(1, N+1):
    for ns in str(i):
        nowvalue *= 10
        nowvalue += int(ns)
        if K <= nowvalue:
            nowvalue %= K
print(nowvalue)

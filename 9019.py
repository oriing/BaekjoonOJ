from collections import deque
import sys
input = sys.stdin.readline

for i in range(int(input())):
    n, k=map(int, input().split())
    v=deque([(n, '')])
    visit=[False]*10000

    visit[n]=True
    while v:
        now=v.popleft()
        if (now[0]==k):
            print(now[1])
            break
        x=now[0]
        for i in [((x*2%10000), 'D'), ((x-1 if x!=0 else 9999), 'S'), (((x * 10 + x // 1000) % 10000), 'L'), (((x + (x % 10) * 10000) // 10), 'R')]:
            if not visit[i[0]]:
                v.append((i[0], now[1]+i[1]))
                visit[i[0]]=True

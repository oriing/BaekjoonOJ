import sys
input = sys.stdin.readline

n, m = map(int,input().split())
mp = [input().rstrip() for _ in range(n)]

def check(x, y):
    cnt1 = 0
    cnt2 = 0
    for i in range(x, x+8):
        for j in range(y, y+8):
            if (i-x+j-y)%2 == 1:
                if mp[i][j]=='W':
                    cnt1+=1
                else:
                    cnt2+=1
            else:
                if mp[i][j]=='W':
                    cnt2+=1
                else:
                    cnt1+=1
    return min(cnt1, cnt2)

x = 10000000000
for i in range(0, n-7):
    for j in range(0, m-7):
        x = min(x, check(i, j))

print(x)

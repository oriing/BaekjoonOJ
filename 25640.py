import sys
input = sys.stdin.readline

s = input()
ans = 0
for _ in range(int(input())):
    if input() == s:
        ans += 1
print(ans)

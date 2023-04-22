import sys
input = sys.stdin.readline
ans=1
for i in range(1, int(input())+1):
    ans*=i
print(ans)
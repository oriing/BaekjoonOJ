import sys
input=sys.stdin.readline
a, b = map(int, input().split())
if a*100>=b:
    print("Yes")
else:
    print("No")

import sys
input=sys.stdin.readline
print("Gnomes:")

for _ in range(int(input().split()[0])):
    s=list(map(int,input().split()))
    if sorted(s) == s or sorted(s, reverse=True) == s:
        print("Ordered")
    else:
        print("Unordered")

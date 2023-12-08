import sys
input = sys.stdin.readline

for _ in range(int(input())):
    a, b = input().split()
    print(len(a.replace(b, '1')))

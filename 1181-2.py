import sys
input = sys.stdin.readline

l = []
for _ in range(int(input())):
    s = input().rstrip()
    l.append((len(s), s))

l = sorted(list(set(l)))
for a, b in l:
    print(b)

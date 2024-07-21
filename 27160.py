d = {}
for i in range(int(input())):
    a, b = input().split()
    d.setdefault(a, 0)
    d[a] += int(b)

if 5 in d.values():
    print("YES")
else:
    print("NO")

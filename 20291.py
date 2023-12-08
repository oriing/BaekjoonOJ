import sys
input = sys.stdin.readline

d = {}

for _ in range(int(input())):
    temp = input().strip().split('.')[1]
    if temp in d.keys():
        d[temp]+=1
    else:
        d[temp]=1

li = sorted(d.items(), key=(lambda x: x[0]))

for a, b in li:
    print(a, b)

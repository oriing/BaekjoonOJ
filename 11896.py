a, b = map(int,input().split())
s = 0
for i in range(max(a, 3), b+1):
    if i%2==0: s += i
print(s)

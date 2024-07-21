li = [True]*50000010

s, e = map(int,input().split())

def pall(x):
    x = str(x)
    n = len(x)
    for i in range(n):
        if x[i] != x[-i-1]:
            return False

    return True
if s<=2: print(2)
for i in range(3, e+1, 2):
    if li[i//2]:
        if s <= i and pall(i):
            print(i)
        for val in range(i*3, e+1, i+i):
            li[val//2] = False

print(-1)

n, m = map(int,input().split())
l = [i for i in range(1, n+1)]

def swap(a, b):
    global l
    d = l[a-1:b]
    k = 0
    for i in range(b-1, a-2, -1):
        l[i] = d[k]
        k += 1

for _ in range(m):
    a, b = map(int,input().split())
    swap(a, b)

for val in l:
    print(val, end=' ')

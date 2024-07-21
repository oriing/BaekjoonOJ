N = int(input())
M = int(input())
L = tuple(map(int,input().split()))
S = input()

dx = {}
px = {()}

for i in range(M):
    p = L[i]
    v = 1 if S[i]=='+' else -1

    dx.setdefault(p, 0)
    dx[p] += v

    for key in tuple(dx):
        if dx[key] == 0:
            del dx[key]
    x = tuple(sorted(dx.items(), key=lambda x: x[0]))
    if x in px:
        print(0)
        break
    px.add(x)
else:
    print(1)

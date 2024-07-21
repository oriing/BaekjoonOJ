import sys
input = sys.stdin.readline

N, P = map(int,input().split())
W, L, G = map(int,input().split())

px = 0
s = set()
for _ in range(P):
    x, w = input().split()
    if w == 'W':
        s.add(x)

for _ in range(N):
    x = input().rstrip()
    
    if x in s:
        px += W
    else:
        px -= L
    
    if px >= G:
        print("I AM NOT IRONMAN!!")
        break
    
    if px <= 0:
        px = 0
else:
    print("I AM IRONMAN!!")

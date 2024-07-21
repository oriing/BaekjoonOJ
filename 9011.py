import sys
input = sys.stdin.readline

for _ in range(int(input())):
    n = int(input())
    d = [i+1 for i in range(n)]
    x = [0]*n
    inp = tuple(map(int, input().split()))
    for i in range(n-1, -1, -1):
        if inp[i] > i:
            print("IMPOSSIBLE")
            break
        x[i] = d[inp[i]]
        del d[inp[i]]
    else:
        for i in x:
            print(i, end=' ')
        print()

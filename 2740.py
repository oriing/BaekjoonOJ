mat1 = []
mat2 = []

m, n = map(int, input().split())
for _ in range(m):
    mat1.append(tuple(map(int, input().split())))
n, p = map(int, input().split())
for _ in range(n):
    mat2.append(tuple(map(int, input().split())))

ans = [[0 for _ in range(p)] for __ in range(m)]
for i in range(m):
    for j in range(n):
        for k in range(p):
            ans[i][k] += mat1[i][j] * mat2[j][k]

for i in range(m):
    for j in range(p):
        print(ans[i][j], end=' ')
    print()

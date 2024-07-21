n = int(input())
li = input().split()
pos = {}

for x in range(n):
    pos[li[x]] = x

inp = input().split()

ans = 0
for i in range(n):
    for j in range(i+1, n):
        if pos[inp[i]] < pos[inp[j]]:
            ans += 1

print(f"{ans}/{n*(n-1)//2}")

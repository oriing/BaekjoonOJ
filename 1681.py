cnt = 0
N, S = map(int,input().split())
i = 0
s = str(S)
while cnt < N:
    i += 1
    while s in str(i):
        i+=1
    cnt += 1
print(i)

k = 0

for i in range(int(input())):
    bef = 0
    cnt = {}
    for x in input():
        if bef != x:
            if x in cnt:
                break
            cnt[x] = 1
            bef = x
    else:
        k+=1
print(k)

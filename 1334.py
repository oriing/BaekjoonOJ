n = list(map(int,str(int(input())+1)))

for p in range(len(n)//2):
    l, r = p, len(n)-p-1
    while n[l] != n[r]:
        n[r] += 1
        if n[r] >= 10:
            for i in range(r, -1, -1):
                if n[i] >= 10:
                    n[i]-=10
                    n[i-1]+=1
                else:
                    break
for p in range(len(n)//2, len(n)):
    r, l = p, len(n)-p-1
    while n[l] != n[r]:
        n[r] += 1
        if n[r] >= 10:
            for i in range(r, -1, -1):
                if n[i] >= 10:
                    n[i]-=10
                    n[i-1]+=1
                else:
                    break
print(''.join(map(str,n)))

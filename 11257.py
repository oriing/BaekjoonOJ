dp=(10.5, 7.5, 12)

for _ in range(int(input().strip())):
    x = tuple(map(int,input().split()))
    if x[1]>=10.5 and x[2]>=7.5 and x[3]>=12 and x[1]+x[2]+x[3]>=55:
        print(x[0], x[1]+x[2]+x[3], "PASS")
    else:
        print(x[0], x[1]+x[2]+x[3], "FAIL")

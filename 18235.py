n, a, b = map(int,input().split())

al = {a}
bl = {b}

i = 1
day = 0
while True:
    anl = set()
    bnl = set()
    day += 1

    for np in al:
        if 0 < np-i <= n: anl.add(np-i)
        if 0 < np+i <= n: anl.add(np+i)
    for np in bl:
        if 0 < np-i <= n: bnl.add(np-i)
        if 0 < np+i <= n: bnl.add(np+i)

    if len(anl & bnl) != 0:
        print(day)
        break

    if len(anl)==0 or len(bnl)==0:
        print(-1)
        break
    
    #print(anl, bnl)
    al = anl
    bl = bnl
    i <<= 1

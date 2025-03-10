d = [[0,4],
[4,11],
[11,23],
[23,40],
[40,60],
[60,77],
[77,89],
[89,96],
[96,100]]

n, t = map(int,input().split())
datas = tuple(map(int,input().split()))
datas = [i*100//n for i in datas]
xal = []
for data in datas:
    if data == 0:
        xal.append('1')
        continue
    for x in range(len(d)):
        l, r = d[x]
        if l<data<=r:
            xal.append(str(x+1))
            break
print(' '.join(xal))

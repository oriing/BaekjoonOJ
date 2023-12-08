import sys
input = sys.stdin.readline

d = []

for _ in range(int(input())):
    d.append((input().strip(), _))
d.sort(key = lambda x: x[0])

mx=0
starts = {}
for i in range(len(d)-1):
    anx=""
    for j in range(len(d[i][0])):
        if d[i][0][j] == d[i+1][0][j]:
            anx+=d[i][0][j]
        else:
            break
    k = len(anx)
    if k == 0:
        continue
    if k > mx:
        starts = {}
        mx = k
    if k == mx:
        if anx in starts.keys():
            starts[anx] = sorted( {starts[anx][0], starts[anx][1], (d[i][1], i), (d[i+1][1], i+1)} , key = lambda x: x[0])[0:2]
        else:
            starts[anx] = sorted( ((d[i][1], i), (d[i+1][1], i+1)) , key = lambda x: x[0])

ans = []
for key, value in starts.items():
    ans.append(value)
ans.sort(key = lambda x: x[0][0])

if len(ans)==0:
    pass
else:
    print(d[ans[0][0][1]][0], d[ans[0][1][1]][0], sep='\n')

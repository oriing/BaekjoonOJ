import sys
input = sys.stdin.readline

n, tar=input().split()
tar = int(float(tar)*100)
s = 0
ss = 0
val = {
    'A+': 450,
    'A0': 400,
    'B+': 350,
    'B0': 300,
    'C+': 250,
    'C0': 200,
    'D+': 150,
    'D0': 100,
    'F': 0,
}

for i in range(int(n)-1):
    a, b = input().split()
    a = int(a)
    b = val[b]
    s += a*b
    ss += a

nowt = int(input())
check=0
for i in sorted(list(val), reverse=True):
    ts = s + nowt*val[i]
    print(i, ts // (ss+nowt))
    if ts // (ss+nowt) > tar:
        print(i)
        check=1
        break
if check==0:
    print("impossible")

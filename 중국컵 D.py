import sys
input = sys.stdin.readline

HOUR = 60

#	char name[25];
#	int day[55]={};
#	int time[55]={};

def timecount(a, b):
    a, aa = map(int, a.split(':'))
    b, bb = map(int, b.split(':'))
    
    return (b-a)*HOUR + (bb-aa)

n, m = map(int,input().split())
m = m//7

bj = {}
for _ in range(n):
    name, date, time1, time2 = input().split()
    date = int(date)-1
    if name not in bj.keys():
        bj[name] = ([0]*m, [0]*m)
    bj[name][0][date//7] += 1
    bj[name][1][date//7] += timecount(time1, time2)
truebjcount = False
for name in sorted(list(bj)):
    truebj = True
    bjdata = bj[name]
    for i in bjdata[0]:
        if i<5:
            truebj=False
            break
    for i in bjdata[1]:
        if i<3600:
            truebj=False
            break
    if truebj:
        print(name)
        truebjcount = True

if not truebjcount:
    print(-1)

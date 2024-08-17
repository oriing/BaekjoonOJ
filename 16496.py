n = int(input())
l = input().split()

def keys(x, i):
    if x[i:i+1] == '':
        return int(x[0])
    else:
        return int(x[i])

def radixSortTable(i):
    global l
    li=[[],[],[],[],[],[],[],[],[],[]]
    for x in l:
        li[9-keys(x,i)].append(x)
    l = []
    for xli in li:
        for x in xli:
            l.append(x)

def radixSort():
    global l
    for i in range(9, -1, -1):
        radixSortTable(i)

def getstring():
    global l
    radixSort()
    for x in l:
        print(x, end='')

getstring()
    

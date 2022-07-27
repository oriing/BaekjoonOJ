a, b, c=map(int,input().split())

if (a, b, c) < (11, 11, 11):
    print(-1)
else:
    x=[a-11,b-11,c-11]
    while x[2]<0:
        x[2]+=60
        x[1]-=1
    while x[1]<0:
        x[1]+=24
        x[0]-=1
    print((x[0]*24+x[1])*60+x[2])

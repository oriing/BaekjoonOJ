import sys
input=sys.stdin.readline
n=int(input())

if n==0:
    print(0)
else:
    i=1
    j=1
    while i<n:
        j+=1
        i*=2
    print(j)
    

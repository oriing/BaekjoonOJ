import sys
input=sys.stdin.readline

s=input().replace('\n', '')
c=len(s)
l=c

for i in range(int(input())):
    f=input().split()
    if f[0]=='L':
        if c==0:
            continue
        c-=1
    elif f[0]=='D':
        if c==l:
            continue
        c+=1
    elif f[0]=='B':
        if c==0:
            continue
        elif c==l:
            s=s[:l-1]
        else:
            s=s[:c-1]+s[c:]
        c-=1
        l-=1
    else:
        s=s[:c]+f[1]+s[c:]
        c+=1
        l+=1
    #print(c, f, s)
print(s)

import sys
input = sys.stdin.readline

n=int(input())

for _ in range(n):
    s = input().split()

    i=0
    while i<len(s):
        
        if s[i]=='Korea':
            if i>1 and s[i-1]=='of':
                if '!' not in s[i-2] and '?' not in s[i-2] and ',' not in s[i-2] and '.' not in s[i-2]:
                    s[i-2]='K-'+s[i-2][0].upper()+s[i-2][1:]
                    del s[i]
                    del s[i-1]
                    i-=2
        if s[i]=='Korea!' or s[i]=='Korea?' or s[i]=='Korea,' or s[i]=='Korea.':
            if i>1 and s[i-1]=='of':
                if '!' not in s[i-2] and '?' not in s[i-2] and ',' not in s[i-2] and '.' not in s[i-2]:
                    s[i-2]='K-'+s[i-2][0].upper()+s[i-2][1:]+s[i][-1]
                    del s[i]
                    del s[i-1]
                    i-=2
        i+=1
    i=len(s)
    while i>=0:
        if i<len(s)-1 and s[i]=='Korea':
            s[i+1]='K-'+s[i+1][0].upper()+s[i+1][1:]
            del s[i]
        i-=1
    print(' '.join(s))

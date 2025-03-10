x,z,y = map(int,input().split())
a=(z+x-y)/2
b=(x+y-z)/2
c=(y+z-x)/2

def check(a, b):
    return not (b-0.01 < a < 0.01+b)

if a<0.01 or b<0.01 or c<0.01: print(-1)
elif check(a+b, x): print(-1)
elif check(b+c, y): print(-1)
elif check(c+a, z): print(-1)
else:
    print(1)
    print(round(a, 1), round(b, 1), round(c, 1))

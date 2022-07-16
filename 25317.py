import sympy as sm
import sys
input = sys.stdin.readline

n=int(input())

x=sm.Symbol('x')
y=1

for _ in range(n):
    s=tuple(map(int, input().split()))
    if s[0]==1:
        y=y*(s[1]*x+s[2])
    else:
        a=y.subs({x:s[1]})
        if a<0:
            print('-')
        elif a>0:
            print('+')
        else:
            print('0')

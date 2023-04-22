import sys
input = sys.stdin.readline

a, b = map(int,input().split())
if b==1:
    print(280)
elif 12<=a<=16:
    print(320)
else:
    print(280)
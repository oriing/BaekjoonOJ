input()
a = list(map(int,input().split()))
b = list(map(int,input().split()))
for i in sorted(a+b):
    print(i, end=' ')
